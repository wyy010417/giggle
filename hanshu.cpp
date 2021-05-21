#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//打印100到200之间的素数
//int isPrime(int num) {
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0) {
//			return 1;
//		}
//		else {
//			return 0;
//		}
//	}
//}
//int main() {
//	for (int n = 100; n <= 200; n++) {
//		if (isPrime(n) == 0) {
//			printf("%d  ", n);
//		}
//	}
//	system("pause");
//	return 0;
//}
//乘法口诀表
void multiTable(int num) {
	for (int i = 1; i <= num; i++) {
		printf("\n");
		for (int j = 1; j <= i; j++) {
			int sum = i * j;
			printf("%d*%d=%d ", i, j, sum);
		}
	}
}
int main() {
	int num = 0;
	printf("请输入你需要的乘法口诀的阶数：");
	scanf("%d", &num);
	multiTable(num);
	system("pause");
	return 0;
}