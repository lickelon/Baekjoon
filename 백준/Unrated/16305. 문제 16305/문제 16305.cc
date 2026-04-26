#include <bits/stdc++.h>

using namespace std;

deque<int> Dq;

int MDtoDate(int month, int day) // 10월 27일을 기준으로 며칠이 지났는지 반환
{
	switch (month)
	{
	case 11:
		return 4 + day - 1;
	case 12:
		return 34 + day - 1;
	case 1:
		return 65 + day - 1;
	case 2:
		return 96 + day - 1;
	case 3:
		return 124 + day - 1;
	case 4:
		return 155 + day - 1;
	case 5:
		return 185 + day - 1;
	case 6:
		return 216 + day - 1;
	case 7:
		return 246 + day - 1;
	case 8:
		return 277 + day - 1;
	case 9:
		return 308 + day - 1;
	case 10:
		return (338 + day - 1) % 365;
	}
	return -1;
}

int DateToMD(int date)
{
	int month = 10, day = 27 + date;
	while(day > 28)
	{
		if((month <= 7 && month % 2 == 1) || (month >= 8 && month % 2 == 0))
		{	
			if(day > 31)
			{
				month += 1;
				day -= 31;
			}
			else break;
		}
		else if(month == 2)
		{
			month += 1;
			day -= 28;
		}
		else
		{
			if(day > 30)
			{
				month += 1;
				day -= 30;
			}
			else break;
		}
		if(month > 12)
		{
			month -= 12;
		}
	}
	return month * 100 + day;
}

int main()
{
	int N, month, day, Max = 0, MaxDate;
	string t1;
	char t2;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> t1 >> month >> t2 >> day;
		Dq.push_back(MDtoDate(month, day));
	}

	sort(Dq.begin(), Dq.end());

	int before = -1;
	//Dq.push_front(Dq.back() - 365);
	for(int i = 0; i <= N; i++)
	{
		int curr = Dq.front(); Dq.pop_front(); Dq.push_back(curr + 365);
		if(before == -1)
		{
			before = curr;
			continue;
		}
		
		if(Max < curr - before)
		{
			Max = curr - before;
			MaxDate = curr;
		}

		if(Max == curr - before)
		{
			if(curr % 365 != 0)
				MaxDate = min(MaxDate, (curr) % 365);
		}
		before = curr;
	}

	int MMDD = DateToMD(MaxDate);
	printf("%02d-%02d", MMDD / 100, MMDD % 100);
	return 0;
}