////
//
//#include <stdio.h>
//#include <string.h>
//char *strlong(char *str1, char *str2) {
//	if (strlen(str1) >= strlen(str2)) {
//		return str1;
//	}
//	else {
//		return str2;
//	}
//}
//int main() {
//	char str1[30], str2[30], *str;
//	gets(str1);
//	gets(str2);
//	str = strlong(str1, str2);
//	printf("Longer string: %s\n", str);
//	return 0;
//}
//
//#include<stdio.h>
///*分鱼递归函数*/
//int fish(int n, int x)
//{
//	if ((x - 1) % 5 == 0)
//	{
//		if (n == 1)
//			return 1;  /*递归出口*/
//		else
//			return fish(n - 1, (x - 1) / 5 * 4);  /*递归调用*/
//	}
//	return 0;  /*x不是符合题意的解，返回0*/
//}
//int main()
//{
//	int i = 0, flag = 0, x;
//	do
//	{
//		i = i + 1;
//		x = i * 5 + 1;  /*x最小值为6，以后每次增加5*/
//		if (fish(5, x))  /*将x传入分鱼递归函数进行检验*/
//		{
//			flag = 1;  /*找到第一个符合题意的x则置标志位为1*/
//			printf("五个人合伙捕到的鱼总数为%d\n", x);
//		}
//	} while (!flag);  /*未找到符合题意的x，继续循环，否则退出循环*/
//	return 0;
//}

//#include<stdio.h>
//int age(int n)
//{
//	int x;
//	if (n == 1)
//		x = 10;
//	else
//		x = age(n - 1) + 2;
//	return x;
//}
//int main()
//{
//	int n;
//	printf("请输入n值：");
//	scanf("%d", &n);
//	printf("第%d个人的年龄为%d\n", n, age(n));
//	return 0;
//}

//
//马踏棋盘
//#include <stdio.h>
//#define X 8
//#define Y 8
//int chess[X][Y];
//
//int nextxy(int *x, int *y, int count)  /*找到基于x,y位置的下一个可走的位置*/
//{
//	switch (count)
//	{
//	case 0:
//		if (*x + 2 <= X - 1 && *y - 1 >= 0 && chess[*x + 2][*y - 1] == 0)
//		{
//			*x = *x + 2;
//			*y = *y - 1;
//			return 1;
//		}
//		break;
//	case 1:
//		if (*x + 2 <= X - 1 && *y + 1 <= Y - 1 && chess[*x + 2][*y + 1] == 0)
//		{
//			*x = *x + 2;
//			*y = *y + 1;
//			return 1;
//		}
//		break;
//	case 2:
//		if (*x + 1 <= X - 1 && *y - 2 >= 0 && chess[*x + 1][*y - 2] == 0)
//		{
//			*x = *x + 1;
//			*y = *y - 2;
//			return 1;
//		}
//		break;
//	case 3:
//		if (*x + 1 <= X - 1 && *y + 2 <= Y - 1 && chess[*x + 1][*y + 2] == 0)
//		{
//			*x = *x + 1;
//			*y = *y + 2;
//			return 1;
//		}
//		break;
//	case 4:
//		if (*x - 2 >= 0 && *y - 1 >= 0 && chess[*x - 2][*y - 1] == 0)
//		{
//			*x = *x - 2;
//			*y = *y - 1;
//			return 1;
//		}
//		break;
//	case 5:
//		if (*x - 2 >= 0 && *y + 1 <= Y - 1 && chess[*x - 2][*y + 1] == 0)
//		{
//			*x = *x - 2;
//			*y = *y + 1;
//			return 1;
//		}
//		break;
//	case 6:
//		if (*x - 1 >= 0 && *y - 2 >= 0 && chess[*x - 1][*y - 2] == 0)
//		{
//			*x = *x - 1;
//			*y = *y - 2;
//			return 1;
//		}
//		break;
//	case 7:
//		if (*x - 1 >= 0 && *y + 2 <= Y - 1 && chess[*x - 1][*y + 2] == 0)
//		{
//			*x = *x - 1;
//			*y = *y + 2;
//			return 1;
//		}
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//
//int TravelChessBoard(int x, int y, int tag)  /*深度优先搜索地"马踏棋盘"*/
//{
//	int x1 = x, y1 = y, flag = 0, count = 0;
//	chess[x][y] = tag;
//	if (tag == X*Y)
//	{
//		return 1;
//	}
//	flag = nextxy(&x1, &y1, count);
//	while (flag == 0 && count<7)
//	{
//		count = count + 1;
//		flag = nextxy(&x1, &y1, count);
//	}
//	while (flag)
//	{
//		if (TravelChessBoard(x1, y1, tag + 1))
//			return 1;
//		x1 = x;
//		y1 = y;
//		count = count + 1;
//		flag = nextxy(&x1, &y1, count);  /*寻找下一个(x,y)*/
//		while (flag == 0 && count<7)
//		{  /*循环地寻找下一个(x,y)*/
//			count = count + 1;
//			flag = nextxy(&x1, &y1, count);
//		}
//	}
//	if (flag == 0)
//		chess[x][y] = 0;
//	return 0;
//}
//int main()
//{
//	int i, j;
//	for (i = 0; i<X; i++)
//		for (j = 0; j<Y; j++)
//			chess[i][j] = 0;
//	if (TravelChessBoard(2, 0, 1))
//	{
//		for (i = 0; i<X; i++)
//		{
//			for (j = 0; j<Y; j++)
//				printf("%-5d", chess[i][j]);
//			printf("\n");
//		}
//		printf("The horse has travelled the chess borad\n");
//	}
//	else
//		printf("The horse cannot travel the chess board\n");
//	return 0;
//}
//
//
//
//#include<stdio.h>
//
//int fish(int n, int x)
//{
//	if ((x - 1) % 5 == 0)
//	{
//		if (n == 1)
//			return 1;
//		else
//			return fish(n - 1, (x - 1) / 5 * 4);
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0, flag = 0, x;
//	do
//	{
//		i = i + 1;
//		x = i * 5 + 1;
//		if (fish(5, x))
//		{
//			flag = 1;
//			printf("五个合伙捕到的鱼总数为%d\n", x);
//		}
//	} while (!flag);
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<CoreWindow.h>
//
//
//void open(char *str)
//{
//	ShellExecuteA(0, "open", str, 0, 0, 1);
//
//}

//void close()
//{
//	system("taskkill /f /im firefox.exe");
//}
//
//void input()
//{
//	keybd_event('F', 0, 0, 0);
//	keybd_event('F', 0, 2, 0);
//	Sleep(50);
//	keybd_event('G', 0, 0, 0);
//	keybd_event('G', 0, 2, 0);
//	Sleep(50);
//	keybd_event('1', 0, 0, 0);
//	keybd_event('1', 0, 2, 0);
//	Sleep(50);
//	keybd_event(0x0D, 0, 0, 0);
//	keybd_event(0x0D, 0, 2, 0);
//	Sleep(50);
//}
//
//void click()
//{
//	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSE_MOVED, 300 * 65535 / 1920, 500 * 65535 / 1080,0,0);
//	Sleep(50);
//	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
//	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
//
//}
//void main()
//{
//	open("http://www.baidu.com");
//	Sleep(10000);
//	input();
//	Sleep(5000);
//	click();
//	Sleep(5000);
//	close();
//
//}

#include <stdio.h>
#include "hotel.h"
int main(void)
{
	int nights;
	double hotel_rate;
	int code;

	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
		case 1:hotel_rate = HOTEL1;
			break;
		case 2:hotel_rate = HOTEL2;
			break;
		case 3:hotel_rate = HOTEL3;
			break;
		case 4:hotel_rate = HOTEL4;
			break;
		default:hotel_rate = 0.0;
			printf("Oops!\n");
			break;
		}
		nights = getnights();
		showprice(hotel_rate, nights);
	}
	printf("Thank you and goodbye.");
	return 0;
}

