#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

class Fibo
{
    int F[2][2];

public:
    Fibo()
    {
        F[0][0] = F[0][1] = F[1][0] = F[1][1] = 0;
    }
    Fibo(int a, int b, int c, int d)
    {
        F[0][0] = a;
        F[0][1] = b;
        F[1][0] = c;
        F[1][1] = d;
    }

    Fibo &operator*(Fibo &x)
    {
        Fibo result;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result.F[i][j] += (F[i][k] * x.F[k][j]) % 10000;

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                F[i][j] = result.F[i][j];

        return *this;
    }

    int *operator[](int i)
    {
        return F[i];
    }
};

Fibo base;

Fibo pow(Fibo &f, int n)
{
    if (n == 1)
        return base;
    if (n % 2 > 0)
        return pow(f, n - 1) * f;
    Fibo result = pow(f, n / 2);
    return result * result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    base[0][0] = base[0][1] = base[1][0] = 1;
    base[1][1] = 0;

    while (true)
    {
        int N;

        cin >> N;
        if (N == -1)
            break;
        if (N == 0)
            cout << "0\n";
        else
        {
            Fibo result = pow(base, N);
            cout << result[0][1] % 10000 << "\n";
        }
    }
    return 0;
}