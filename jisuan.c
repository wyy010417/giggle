#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	//计算5的阶乘
	/*int i = 2;
	int t = 1;
	while (i <= 5) {
		t = t * i;
		i++;
	}
	printf("%d\n", t);*/
	//求多项式1-1/2+1/3-1/4+...-1/100的值
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno <= 100) {
		sign = -sign;
		term = sign / deno;
		sum += term;
		deno += 1;
	}
	printf("%f\n", sum);
	//输入10个数，输出其中最大的数
	/*int a[10];
	printf("请输入十个数：");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > a[i + i]) {
			int tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
		}
	}
	printf("其中最大的数是：%d\n", a[9]);*/
	//排列三个数的大小顺序
	/*int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);*/
	//判断一个数能否同时被3和5整除
	/*int n;
	printf("请输入一个整数：");
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("这个数可以同时被3和5整除\n");
	}
	else {
		printf("这个数不可以同时被3和5整除\n");

	}*/
 
	system("pause");
	return 0;
}