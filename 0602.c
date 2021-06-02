#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int findNum(int n, int arr[], int x) {
//	int count = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == x) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	//从n个整数中判断x出现过几次
//	int arr[10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);//总共有n个整数
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	printf("请输入你要查找的整数：");
//	scanf("%d", &x);
//	printf("%d", findNum(n, arr, x));
//	system("pause");
//	return 0;
//}
//判断三位数内所有素数的个数
//int primeNum(int n) {
//	int count = 0;
//	for (int i = 2; i < n; i++) {
//		if (n % i == 0) {
//			return 0;
//	   }
//	}
//	return 1;
//}
//int main() {
//	int count = 0;
//	for (int i = 0; i < 1000; i++) {
//		if (primeNum(i)) {
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//去重并且从小到大排列数组
//void numOrder(int n, int arr[]) {
//	//从小到大排列
//	for (int i = 0; i < n-1; i++) {
//		for (int j = 0; j < n - i-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int n = 0;
//	printf("请输入整数个数：");
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&arr[i]);
//	}
//	numOrder(n, arr);
//	//打印排序后的数列
//	for (int i = 0; i < n; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	//去重 ，比较n-1对数；
//	for (int i = 0; i < n-1; i++) {
//		if (arr[i] == arr[i + 1]) {
//			//此循环使去重后的数列向前推进（补齐空位）
//			for (int k = i; k < n - 1; k++) {
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	//打印去重后的数列
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//求两个数的最大公约数和最小公倍数之和
//方法一（暴力求解法）：
//int main() {
//	int m = 0;
//	int n = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &m, &n);
//	int max = m > n ? m : n;
// 先求最小公倍数
//	while (max) {
//		if (m % max == 0 && n % max == 0) {
//			break;
//		}
//		max--;
//	}
// 再求最大公约数
//	int min = m > n ? n : m;
//	while (min) {
//		if (min % m == 0 && min % n == 0) {
//			break;
//		}
//		min++;
//	}
//	printf("%d\n", min + max);
//	system("pause");
//	return 0;
//}
//方法二(辗转相除法）
//int main() {
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &m, &n);
//	int a = m;
//	int b = n;
//	while (tmp = a % b) {
//		a = b;
//		b = tmp;
//	}
//	//其中b就是最小公倍数，m*n/b 为最大公约数
//	printf("%d", b + m * n / b);
//	system("pause");
//	return 0;
//}
//把一个整数的每一位都变为0或1，奇数为1，偶数为0
//#include<math.h>
//int main() {
//	int num = 0;
//	int i = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int ret = 0;
//	while (num) {
//		//获取到一个整数的每一位
//		int tmp = num % 10;
//		//判断每一位的奇偶性
//		if (tmp % 2 == 0) {
//			tmp = 0;
//		}
//		else {
//			tmp = 1;
//		}
//		//奇数变1，偶数变0
//	    //通过ret加乘方式给每一位赋值0或1
//		ret += tmp * pow(10, i);
//		num /= 10;
//		i++;
//	 }
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//有两种方式走n阶台阶，一种是一次跨一阶，另一种一次跨两阶，共有多少种走法
//斐波那契的实际问题
//int fib(int n) {
//	if (n <= 2) {
//		return n;
//	 }
//	else {
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main() {
//	int n = 0;
//	printf("请输入台阶数：");
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//正整数序列去重并排序（区别：每行只输入一个整数）
int main() {
	int num = 0;
	int arr[100000] = { 0 };
	int tmp = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &tmp);
		arr[tmp] = tmp;
	}
	for (int i = 0; i < 100000; i++) {
 		if (arr[i] != 0) {
			printf("%d", arr[i]);
		}
	}
	system("pause");
	return 0;
}