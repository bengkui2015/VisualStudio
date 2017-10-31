/*字符长度比较*/
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

/*分鱼递归函数*/
//#include<stdio.h>
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

/*年龄计算*/
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


/*马踏棋盘*/
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

/*自动搜索*/
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

/*hotel.c hotel.h*/
//#include <stdio.h>
//#include "hotel.h"
//int main(void)
//{
//	int nights;
//	double hotel_rate;
//	int code;
//
//	while ((code = menu()) != QUIT)
//	{
//		switch (code)
//		{
//		case 1:hotel_rate = HOTEL1;
//			break;
//		case 2:hotel_rate = HOTEL2;
//			break;
//		case 3:hotel_rate = HOTEL3;
//			break;
//		case 4:hotel_rate = HOTEL4;
//			break;
//		default:hotel_rate = 0.0;
//			printf("Oops!\n");
//			break;
//		}
//		nights = getnights();
//		showprice(hotel_rate, nights);
//	}
//	printf("Thank you and goodbye.");
//	return 0;
//}

/*超出数组边界*/
//#include<stdio.h>
//#define SIZE 4
//int main(void)
//{
//	int value1 = 44;
//	int arr[SIZE];
//	int value2 = 88;
//	int i;
//
//	printf("value1 = %d, value2 = %d\n", value1, value2);
//	for (i = -1; i <= SIZE;i++)
//		arr[i] = 2 * i + 1;
//	for (i = -1;i < 7;i++)
//		printf("%2d %d\n", i, arr[i]);
//	printf("value1 = %d ,value2=%d\n", value1, value2);
//	
//	return 0;
//}
/*指针加法*/
//#include <stdio.h>
//#define SIZE 4
//int main(void)
//{
//	short dates[SIZE];
//	short *pti;
//	short index;
//	double bills[SIZE];
//	double *ptf;
//	pti = dates;
//	ptf = bills;
//	printf("%23s %10s\n", "short", "double");
//	for (index = 0;index < SIZE;index++)
//		printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
//	
//	return 0;
//}
/*使用指针符号*/
//#include<stdio.h>
//#define MONTHS 12
//int main(void)
//{
//	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int index;
//
//	for (index = 0;index < MONTHS;index++)
//		printf("Month %2d has %d days.\n", index + 1, *(days + index));
//
//		return 0;
//}

/*指针运算的优先级*/
//#include<stdio.h>
//int data[2] = { 100,200 };
//int moredata[2] = { 300,400 };
//int main(void)
//{
//	int * p1, *p2, *p3;
//	p1 = p2 = data;
//	p3 = moredata;
//	printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//	printf("*p1++ = %d, *++p2 = %d, (*p3) ++ = %d\n", *p1++, *++p2, (*p3)++);
//	printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
//	
//	return 0;
//
//}

/*指针操作*/
//#include<stdio.h>
//int main(void)
//{
//	int urn[5] = { 100, 200, 300, 400, 500 };
//	int * ptr1, *ptr2, *ptr3;
//	ptr1 = urn;
//	ptr2 = &urn[2];
//	printf("pointer value, dereferenced pointer, pointer adrress:\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//
//	ptr3 = ptr1 + 4;
//	printf("\nadding an int to a pointer:\n");
//	printf("ptr1 + 4 = %p, *(ptr1 + 3) = %d\n", ptr1 + 4, *(ptr1 + 3));
//
//	ptr1++;		//递增指针
//	printf("\nvalues after ptr1++\n");
//	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);
//
//	ptr2--;		//递减指针
//	printf("\nvalues after ptr2--\n");
//	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
//
//	--ptr1;		//恢复为初始值
//	++ptr2;		//恢复为初始值
//	printf("\npointers reset to original values:\n");
//	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
//
////一个指针减去另一个指针
//	printf("\nsubtracting one pointer form another:\n");
//	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %d\n", ptr2, ptr1, ptr2 - ptr1);
//
//	//一个指针减去一个整数
//	printf("\nsubtracting an int from a pointer:\n");
//	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
//
//	return 0;
//
//}

/*使用枚举值*/
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//
//enum spectrum {red, orange, yellow, green, blue, violet};
//const char * colors[6] = { "red", "orange", "yellow", "gerrn", "blue", "violet" };
//
//#define LEN 30
//
//int main(void)
//{
//	char choice[LEN];
//	enum spectrum color;
//	bool color_is_found = false;
//
//	puts("Enter a color (empty line to quit):");
//	while (gets_s(choice,LEN) != NULL && choice[0] != '\0')
//	{
//		for (color = red; color <= violet; color++)
//			if (strcmp(choice, colors[color]) == 0)
//			{
//				color_is_found = true;
//				break;
//			}
//
//		if (color_is_found)
//			switch (color)
//			{
//			case red:puts("Roses are red.");
//				break;
//			case orange:puts("Poppies are orange");
//				break;
//			case yellow:puts("Sunflows are yellow.");
//				break;
//			case green:puts("Grass are green");
//				break;
//			case blue:puts("Bluebells are blue.");
//				break;
//			case violet:puts("Violets are violet");
//				break;
//
//			}
//		else
//			printf("I don't know about the color %s.\n", choice);
//		color_is_found = false;
//		puts("Next color, please(empty line to quie):");
//
//	}
//	puts("Goodbye");
//
//	return 0;
//
//}

/*使用位运算显示二进制数*/
//#include<stdio.h>
//char * itobs(int, char *);
//void show_bstr(const char *);
//int main(void)
//{
//	char bin_str[8 * sizeof(int) + 1];
//	int number;
//
//	puts("Enter integers and see them in binary.");
//	puts("Non-number input terminates program.");
//	while (scanf_s("%d", &number) == 1)
//	{
//		itobs(number, bin_str);
//		printf("%d is", number);
//		show_bstr(bin_str);
//		putchar('\n');
//	}
//	puts("Bye!");
//	
//	return 0;
//}
//
//char * itobs(int n, char * ps)
//{
//	int i;
//	static int size = 8 * sizeof(int);
//	for (i = size - 1;i >= 0; i--, n >>= 1)
//		ps[i] = (01 & n) + '0';
//	ps[size] = '\0';
//	return 0;
//}
//
//void show_bstr(const char * str)
//{
//	int i = 0;
//	while (str[i])
//	{
//		putchar(str[i]);
//		if (++i % 4 == 0 && str[i])
//			putchar(' ');
//	}
//}

#include<stdio.h>
union save
{
	int data;
	char d[4];
};

void main(void)
{
	union save s;
	union save ss;
	union save sss;
	s.d[0] = 1;
	s.d[1] = 2;
	ss.d[0] = 3;
	ss.d[1] = 4;
	sss.d[0] = 5;
	sss.d[1] = 6;
	sss.d[3] = 7;
	printf("%d,%d,%d,%d,%d,%d,%d", s.d[0], s.d[1], ss.d[0], ss.d[1],sss.d[0],sss.d[1],sss.d[3]);
	int CH4_debug_two=10, CH4_set_zero=0, CH4_set_two=2;
	if ( CH4_debug_two <= CH4_set_zero)
	{
		CH4_debug_two = CH4_set_zero;
	}
	int tradc = (CH4_debug_two - CH4_set_zero) * 200;
	int adc_result = (unsigned int)(tradc / (unsigned long)(CH4_set_two - CH4_set_zero));
	adc_result += 400;
	return adc_result;
	return 0;
}    tradc = (adc_result - CH4_set_zero.data) * 200;
adc_result = (tradc /(CH4_set_two.data - CH4_set_zero.data);