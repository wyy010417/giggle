#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {

	//打印心形
	/*for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 5 - 2 * i; j++) {
			printf("  ");
		}
		for (int j = 0; j < 6 + 4 * i; j++) {
			printf("* ");
		}
		for (int j = 0; j < 9 - 4 * i; j++) {
			printf("  ");
		}
		for (int j = 0; j < 6 + 4 * i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++) {
		printf("\n");
		for (int j = 0; j < 31; j++) {
			printf(" *");
		}
		printf("\n");
	}
	for (int i = 0; i < 8; i++) {
		printf("\n");
		for (int j = 0; j < 2 * i + 1; j++) {
			printf("  ");
		}
		for (int j = 0; j < 29 - 4 * i; j++) {
			printf("* ");
		}
		printf("\n");
	}*/
	//打印菱形
	/*int line = 0;
	int i = 0;
	printf("请输入一个数：\n");
	scanf("%d",&line);
	for (i = 0; i <=line; i++) {
		int j = 0;
		for (j=0;j<=line-i-1;j++) {
			printf(" ");
		}
		for (j=0;j<2*i+1;j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < line; i++) {
		int j = 0;
		for (j = 0; j <= i; j++) {
			printf(" ");
		}
		for (j = 0; j <= 2 * (line - i - 1); j++) {
			printf("*");
		}
		printf("\n");
	}*/

	//三个数从小到大排列
	/*int a, b, c;
	printf("请输入你要比较的三个数：\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	 if (a > c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	 if (b > c) {
		int tmp = b;
		b = c;
		c = tmp;
	}*/
	/*printf("%d %d %d", a, b, c);*/
	//判断某一天是这一年的第几天
	//int year, month, day, leap;
	//int sum = 0;
	//printf("请输入您要查询的年，月，日：");
	//scanf("%d,%d,%d", &year, &month, &day);
	//switch (month) {
	//case 1:sum = 0; break;
	//case 2:sum = 31; break;
	//case 3:sum = 59; break;
	//case 4:sum = 90; break;
	//case 5:sum = 120; break;
	//case 6:sum = 151; break;
	//case 7:sum = 181; break;
	//case 8:sum = 212; break;
	//case 9:sum = 243; break;
	//case 10:sum = 273; break;
	//case 11:sum = 304; break;
	//case 12:sum = 334; break;
	//default:printf("data error"); break;
	//}
	//sum += day;
	//if (year % 400 == 0 || year / 4 == 0 && year % 100 != 0) {
	//	leap = 1;
	//}
	//else { leap = 0; }
	//if (leap == 1 && month > 2) {
	//	sum++;
	//}
	//printf("%d", sum);
	system("pause");
	return 0;
}
