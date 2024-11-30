#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

enum color
{
    w = 0,
    y = 1,
    r = 2,
    o = 3,
    g = 4,
    b = 5,
};

enum side
{
    U = 0,
    D = 1,
    F = 2,
    B = 3,
    L = 4,
    R = 5,
};

int cube[3][3][6]; // U D F B L R
/*
간단한 회전으로 면을 바라봤을 때 왼쪽 위가 0,0이 된다.
[0][0] [0][1] [0][2]
[1][0] [1][1] [1][2]
[2][0] [2][1] [2][2]
*/

void rotateSide(int cube[3][3][6], side _side)
{
    int temp = cube[0][0][_side];
    cube[0][0][_side] = cube[2][0][_side];
    cube[2][0][_side] = cube[2][2][_side];
    cube[2][2][_side] = cube[0][2][_side];
    cube[0][2][_side] = temp;
    temp = cube[0][1][_side];
    cube[0][1][_side] = cube[1][0][_side];
    cube[1][0][_side] = cube[2][1][_side];
    cube[2][1][_side] = cube[1][2][_side];
    cube[1][2][_side] = temp;
}

// 무조건 시계방향으로만 돌린다. 시계 반대방향일 경우 세번 호출할 것!
void rotate(int cube[3][3][6], side _side) 
{
    int temp;
    switch(_side)
    {

    case U: // B R F L
    {
        rotateSide(cube, _side);
        temp = cube[0][0][4];
        cube[0][0][4] = cube[0][0][2];
        cube[0][0][2] = cube[0][0][5];
        cube[0][0][5] = cube[0][0][3];
        cube[0][0][3] = temp;
        temp = cube[0][1][4];
        cube[0][1][4] = cube[0][1][2];
        cube[0][1][2] = cube[0][1][5];
        cube[0][1][5] = cube[0][1][3];
        cube[0][1][3] = temp;
        temp = cube[0][2][4];
        cube[0][2][4] = cube[0][2][2];
        cube[0][2][2] = cube[0][2][5];
        cube[0][2][5] = cube[0][2][3];
        cube[0][2][3] = temp;
        break;
    }
    case D: // F R B L
    {
        rotateSide(cube, _side);
        temp = cube[2][0][4];
        cube[2][0][4] = cube[2][0][3];
        cube[2][0][3] = cube[2][0][5];
        cube[2][0][5] = cube[2][0][2];
        cube[2][0][2] = temp;
        temp = cube[2][1][4];
        cube[2][1][4] = cube[2][1][3];
        cube[2][1][3] = cube[2][1][5];
        cube[2][1][5] = cube[2][1][2];
        cube[2][1][2] = temp;
        temp = cube[2][2][4];
        cube[2][2][4] = cube[2][2][3];
        cube[2][2][3] = cube[2][2][5];
        cube[2][2][5] = cube[2][2][2];
        cube[2][2][2] = temp;
        break;
    }
    case F: // U R D L
    {
        rotateSide(cube, _side);
        temp = cube[0][2][4];
        cube[0][2][4] = cube[0][0][1];
        cube[0][0][1] = cube[2][0][5];
        cube[2][0][5] = cube[2][2][0];
        cube[2][2][0] = temp;
        temp = cube[1][2][4];
        cube[1][2][4] = cube[0][1][1];
        cube[0][1][1] = cube[1][0][5];
        cube[1][0][5] = cube[2][1][0];
        cube[2][1][0] = temp;
        temp = cube[2][2][4];
        cube[2][2][4] = cube[0][2][1];
        cube[0][2][1] = cube[0][0][5];
        cube[0][0][5] = cube[2][0][0];
        cube[2][0][0] = temp;
        break;
    }
    case B: // U L D R
    {
        rotateSide(cube, _side);
        temp = cube[0][2][5];
        cube[0][2][5] = cube[2][2][1];
        cube[2][2][1] = cube[2][0][4];
        cube[2][0][4] = cube[0][0][0];
        cube[0][0][0] = temp;
        temp = cube[1][2][5];
        cube[1][2][5] = cube[2][1][1];
        cube[2][1][1] = cube[1][0][4];
        cube[1][0][4] = cube[0][1][0];
        cube[0][1][0] = temp;
        temp = cube[2][2][5];
        cube[2][2][5] = cube[2][0][1];
        cube[2][0][1] = cube[0][0][4];
        cube[0][0][4] = cube[0][2][0];
        cube[0][2][0] = temp;
        break;
    }
    case L: // U F D B
    {
        rotateSide(cube, _side);
        temp = cube[0][2][3];
        cube[0][2][3] = cube[2][0][1];
        cube[2][0][1] = cube[2][0][2];
        cube[2][0][2] = cube[2][0][0];
        cube[2][0][0] = temp;
        temp = cube[1][2][3];
        cube[1][2][3] = cube[1][0][1];
        cube[1][0][1] = cube[1][0][2];
        cube[1][0][2] = cube[1][0][0];
        cube[1][0][0] = temp;
        temp = cube[2][2][3];
        cube[2][2][3] = cube[0][0][1];
        cube[0][0][1] = cube[0][0][2];
        cube[0][0][2] = cube[0][0][0];
        cube[0][0][0] = temp;
        break;
    }
    case R: // U B D F
    {
        rotateSide(cube, _side);
        temp = cube[0][2][2];
        cube[0][2][2] = cube[0][2][1];
        cube[0][2][1] = cube[2][0][3];
        cube[2][0][3] = cube[0][2][0];
        cube[0][2][0] = temp;
        temp = cube[1][2][2];
        cube[1][2][2] = cube[1][2][1];
        cube[1][2][1] = cube[1][0][3];
        cube[1][0][3] = cube[1][2][0];
        cube[1][2][0] = temp;
        temp = cube[2][2][2];
        cube[2][2][2] = cube[2][2][1];
        cube[2][2][1] = cube[0][0][3];
        cube[0][0][3] = cube[2][2][0];
        cube[2][2][0] = temp;
        break;
    }

    }
}

void init(int cube[3][3][6])
{
    for(int i = 0; i < 6; i++)
    {
        
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                cube[j][k][i] = i;
            }
        }
    }
}

 inline void solve()
 {
    init(cube);
    int N;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        string rotation;
        cin >> rotation;
        side _side;
        switch(rotation[0])
        {
        case 'U': // B R F L
            _side = U;
            break;
        case 'D': // F R B L
            _side = D;
            break;
        case 'F': // U R D L
            _side = F;
            break;
        case 'B': // U L D R
            _side = B;
            break;
        case 'L': // U F D B
            _side = L;
            break;
        case 'R': // U B D F
            _side = R;
            break;
        }
        if(rotation[1] == '-')
        {
            rotate(cube, _side);
            rotate(cube, _side);
        }
        rotate(cube, _side);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            switch(cube[i][j][0])
            {
            case 0:
                cout << 'w';
                break;
            case 1:
                cout << 'y';
                break;
            case 2:
                cout << 'r';
                break;
            case 3:
                cout << 'o';
                break;
            case 4:
                cout << 'g';
                break;
            case 5:
                cout << 'b';
                break;
            }
        }
        cout << "\n";
    }
}
 
int main()
{
    /* ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0); */
    //cout.fixed; cout.precision(15);
 
    int T;
    cin >> T;
 
    while(T--)
    {
        solve();
    }
 
    return 0;
}