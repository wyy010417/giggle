#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//�ַ������򷽷�һ��
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
// ���������ݹ�����
//void reverseString2(char str[]) {
//	int len = strlen(str);
//	if (len == 0 || len == 1) {
//		return 0;
//	}
//	//�Ƚ������������Ե���ַ����м䲿�ֵݹ鴦���ַ����������������
//	char tmp = str[0];
//	str[0] = str[len - 1];
//	//���������һ����ʱ������Ŀ����Ϊ�˰�bcdef�����һ��Ԫ����ʱȥ��
//	str[len - 1] = '\0';
//	//ȥ��֮����м䲿�ֽ��еݹ�
//	reverseString2(str + 1);
//	//�ݹ���������һ��Ԫ�ػ�ԭ
//	str[len - 1] = tmp; 
//}
//int main() {
//	char str[] = "abcdef";
//	reverseString2(str);
//	printf("%s", str);
//	system("pause ");
//	return 0;
//}
//// �ǵݹ�ʵ��������λ֮��
////int digitSum1(unsigned int num) {
////	int sum = 0;
////	while (num) {
////		printf("%d\n", num%10);
////		sum += num % 10;
////		num /= 10;
////	}
////	return sum;
////}
////�ݹ�ʵ��������λ��֮��
////int digitSum2(unsigned int num) {
////	if (num == 0) {
////		return 0;
////	}
////	return(num % 10) + digitSum2(num / 10);
////}
//int main() {
//	int num = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	printf("%d", digitSum2(num));
//	system("pause");
//	return 0;
//}
// �ݹ�ʵ��n��k�η�
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
//�ǵݹ�ʵ��strlen
//int myStrlen1(char str[]) {
//	int n = 0;
//	while (str[n]) {
//		if (str[n]) {
//			n++;
//		}
//	}
//	return n;
//}
// �ݹ�ʵ��strlen����
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
//�ǵݹ�ʵ�����n��쳲�������
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
//�ݹ�ʵ�����n��쳲�������
//int fib2(int num) {
//	if (num == 1 || num == 2) {
//		return 1;
//	}
//	return fib2(num - 1) + fib2(num - 2);
//}
//int main() {
//	int num = 0;
//	printf("����������Ҫ��쳲��������е��±꣺");
//	scanf("%d", &num);
//	printf("%d",fib2(num));
//	system("pause");
//	return 0;
//}