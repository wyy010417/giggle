#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//字符串逆序方法一：
//void reverseString1(char str[]) {
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right) {
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
// 方法二：递归逆序
//void reverseString2(char str[]) {
//	int len = strlen(str);
//	if (len == 0 || len == 1) {
//		return 0;
//	}
//	//先交换左右两侧边缘的字符，中间部分递归处理字符串，依次完成逆序
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	//这个操作是一个临时操作，目的是为了把bcdef中最后一个元素暂时去掉
//	str[len - 1] = '\0';
//	//去掉之后对中间部分进行递归
//	reverseString2(str + 1);
//	//递归结束将最后一个元素还原
//	str[len - 1] = tmp; 
//}
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s", str);
//	system("pause ");
//	return 0;
//}
//// 非递归实现整数各位之和
////int digitSum1(unsigned int num) {
////	int sum = 0;
////	while (num) {
////		printf("%d\n", num%10);
////		sum += num % 10;
////		num /= 10;
////	}
////	return sum;
////}
////递归实现整数各位数之和
////int digitSum2(unsigned int num) {
////	if (num == 0) {
////		return 0;
////	}
////	return(num % 10) + digitSum2(num / 10);
////}
//int main() {
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	printf("%d", digitSum2(num));
//	system("pause");
//	return 0;
//}
// 递归实现n的k次方
//int myPower(int n, int k) {
//	if (k == 0) {
//		return 1;
//	}
//	return n * myPower(n,k - 1);
//}
//int main() {
//	printf("%d", myPower(2, 10));
//	system("pause");
//	return 0;
//}
//非递归实现strlen
//int myStrlen1(char str[]) {
//	int n = 0;
//	while (str[n]) {
//		if (str[n]) {
//			n++;
//		}
//	}
//	return n;
//}
// 递归实现strlen函数
//int myStrlen2(char str[]) {
//	if(str[0]=='\0'){
//		return 0;
//	}
//	return 1 + myStrlen2(str + 1);
//}
//int main() {
//	/*printf("%d", myStrlen1("abcdef"));*/
//	printf("%d", myStrlen2("abcdef"));
//	system("pause");
//	return 0;
//}
//非递归实现求第n个斐波那契数
//int fib1(int num) {
//	int num1 = 1;
//	int num2 = 1;
//	int tmp = 0;
//	if (num < 3) {
//		return 1;
//	}
//	else {
//		for (int i = 0; i <= num - 3; i++) {
//			tmp = num1 + num2;
//			num1 = num2;
//			num2 = tmp;
//		}
//	}
//	return tmp;
//}
//递归实现求第n个斐波那契数
//int fib2(int num) {
//	if (num == 1 || num == 2) {
//		return 1;
//	}
//	return fib2(num - 1) + fib2(num - 2);
//}
//int main() {
//	int num = 0;
//	printf("请输入你需要的斐波那契数列的下标：");
//	scanf("%d", &num);
//	printf("%d",fib2(num));
//	system("pause");
//	return 0;
//}