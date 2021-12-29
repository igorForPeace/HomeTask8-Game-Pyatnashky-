#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
COORD cursorPos;
void ConsoleCursorVisible(bool show, short size)   // функция убирает курсор из консоли
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show;
	structCursorInfo.dwSize = size;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
void GO_UP()  // Движение вверх
{
	cursorPos.Y -= 3;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cursorPos.Y += 1;
	cursorPos.X -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y += 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "|0 |";
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "|0 |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y -= 1;
	cursorPos.X += 1;
}
void GO_DOWN()   // движение вниз
{
	cursorPos.Y += 3;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cursorPos.X -= 1;
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "|0 |";
	cursorPos.Y += 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "|0 |";
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+--+";
	cursorPos.X += 1;
	cursorPos.Y += 1;
}
void GO_RIGHT()   // движение вправо
{
	cursorPos.X += 5;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cursorPos.X -= 1;
	cursorPos.Y -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.X -= 1;
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+";
	Sleep(20);
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << " |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-+";
	Sleep(20);
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout <<  "0 |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "--+";
	Sleep(20);
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|0 |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+--+";
	Sleep(20);
	cursorPos.Y -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << " +--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << " |0 |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << " +--+";
	cursorPos.X += 2;
	cursorPos.Y -= 1;
}
void GO_LEFT()   // движение влево
{
	cursorPos.X -= 5;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cursorPos.Y -= 1;
	cursorPos.X -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "    ";
	cursorPos.Y -= 2;
	cursorPos.X += 3;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+";
	cursorPos.Y -= 2;
	cursorPos.X -= 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	Sleep(20);
	cout << "+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+";
	cursorPos.Y -= 2;
	cursorPos.X += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "0";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-";
	Sleep(20);
	cursorPos.Y -= 2;
	cursorPos.X -= 2;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+";
	cursorPos.Y -= 2;
	cursorPos.X += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "0";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "-";
	cursorPos.Y -= 1;
	cursorPos.X += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << " ";
	Sleep(20);
	cursorPos.Y -= 1;
	cursorPos.X -= 3;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+--+";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "|0 |";
	cursorPos.Y += 1;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	cout << "+--+";
	cursorPos.X += 1;
	cursorPos.Y -= 1;
}
int main()
{
	SetConsoleTitle(L"Пятнашки - Игра");
	ConsoleCursorVisible(false, 100);
	enum direction { DOWN = 80, UP = 72, LEFT = 75, RIGHT = 77 };
	const int M = 4;
	const int N = 4;
	int arr[M][N];
	int a = 1;
	COORD coord;
	int x = 0;
	int y = 0;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == M - 1 && j == N - 1)
			{
				arr[i][j] = 0;
				break;
			}
			arr[i][j] = a;
			a++;
		}
	}
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			coord.X = (4 + 1) * x;
			coord.Y = y;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << "+--+";
			coord.Y = y  +1 ;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			if (arr[i][j]<10)
			{
				cout << "| " << arr[i][j] << "|";
			}
			else
			{
				cout << "|" << arr[i][j] << "|";
			}
			coord.Y = y+2 ;
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
			cout << "+--+";
			x++;
			
		}
		cout << endl;
		x = 0;
		y += 3;
	}
	int i = 3;
	int j = 3;
	cursorPos.X = 16;
	cursorPos.Y = 10;
	SetConsoleCursorPosition(hStdOut, cursorPos);
	while (true)
	{
		if (_kbhit)
		{
			int direct = _getch();
			if (direct == 224)
				direct = _getch();

			switch (direct)
			{
			case UP:
				if (cursorPos.Y == 1)
				{
					continue;
				}
				cursorPos.Y -= 3;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				cout << "0 ";
				cursorPos.Y += 3;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				arr[i][j] = arr[i - 1][j];
				cout << arr[i][j];
				--i;
				arr[i][j] = 0;
				GO_UP();
				break;
			case DOWN:
				if (cursorPos.Y == 10)
				{
					continue;
				}
				cursorPos.Y += 3;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				cout << "0 ";
				cursorPos.Y -= 3;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				arr[i][j] = arr[i + 1][j];
				cout << arr[i][j];
				++i;
				arr[i][j] = 0;
				GO_DOWN();
				break;
			case RIGHT:
				if (cursorPos.X == 16)
				{
					continue;
				}
				cursorPos.X += 5;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				cout << "0 ";
				cursorPos.X -= 5;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				arr[i][j] = arr[i][j + 1];
				cout << arr[i][j];
				++j;
				arr[i][j] = 0;
				GO_RIGHT();
				break;
			case LEFT:
				if (cursorPos.X == 1)
				{
					continue;
				}
				cursorPos.X -= 5;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				cout << "0 ";
				cursorPos.X += 5;
				SetConsoleCursorPosition(hStdOut, cursorPos);
				arr[i][j] = arr[i][j - 1];
				cout << arr[i][j];
				--j;
				arr[i][j] = 0;
				GO_LEFT();
				break;
			}
		}
		int number_2 = 1;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (arr[i][j] == number_2)
				{
					if (number_2 == 15)
					{
						cout << "You are winner!" << endl;
						exit(0);
					}
					else
					{

					}
					number_2++;
				}
				else
				{
					break;
				}
			}
		}
	}
	return 0;
}