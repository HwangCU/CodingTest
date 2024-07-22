#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
int map[12][12];
int N;

struct Core
{
	int y;
	int x;
};

Core C[12];

void init()
{
	memset(map, 0, sizeof(map));
}

void input()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
}

void findCore()
{
	int n = 0;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			if (map[i][j] == 1)
			{
				C[n].y = i;
				C[n].x = j;
				n++;
			}
		}
	}
}

void solve()
{
	int dy[4] = { -1,1,0,0 };
	int dx[4] = { 0,0,-1,1 };

}

int main()
{
	freopen("sample_input.txt", "r", stdin);
	int T;
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		init();
		input();
		solve();
	}
}
