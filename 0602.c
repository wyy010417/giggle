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
//	//��n���������ж�x���ֹ�����
//	int arr[10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);//�ܹ���n������
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	int x = 0;
//	printf("��������Ҫ���ҵ�������");
//	scanf("%d", &x);
//	printf("%d", findNum(n, arr, x));
//	system("pause");
//	return 0;
//}
//�ж���λ�������������ĸ���
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
//ȥ�ز��Ҵ�С������������
//void numOrder(int n, int arr[]) {
//	//��С��������
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
//	printf("����������������");
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int i = 0; i < n; i++) {
//		scanf("%d",&arr[i]);
//	}
//	numOrder(n, arr);
//	//��ӡ����������
//	for (int i = 0; i < n; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	//ȥ�� ���Ƚ�n-1������
//	for (int i = 0; i < n-1; i++) {
//		if (arr[i] == arr[i + 1]) {
//			//��ѭ��ʹȥ�غ��������ǰ�ƽ��������λ��
//			for (int k = i; k < n - 1; k++) {
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	//��ӡȥ�غ������
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//�������������Լ������С������֮��
//����һ��������ⷨ����
//int main() {
//	int m = 0;
//	int n = 0;
//	printf("����������������");
//	scanf("%d %d", &m, &n);
//	int max = m > n ? m : n;
// ������С������
//	while (max) {
//		if (m % max == 0 && n % max == 0) {
//			break;
//		}
//		max--;
//	}
// �������Լ��
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
//������(շת�������
//int main() {
//	int m = 0;
//	int n = 0;
//	int tmp = 0;
//	printf("����������������");
//	scanf("%d %d", &m, &n);
//	int a = m;
//	int b = n;
//	while (tmp = a % b) {
//		a = b;
//		b = tmp;
//	}
//	//����b������С��������m*n/b Ϊ���Լ��
//	printf("%d", b + m * n / b);
//	system("pause");
//	return 0;
//}
//��һ��������ÿһλ����Ϊ0��1������Ϊ1��ż��Ϊ0
//#include<math.h>
//int main() {
//	int num = 0;
//	int i = 0;
//	printf("������һ��������");
//	scanf("%d", &num);
//	int ret = 0;
//	while (num) {
//		//��ȡ��һ��������ÿһλ
//		int tmp = num % 10;
//		//�ж�ÿһλ����ż��
//		if (tmp % 2 == 0) {
//			tmp = 0;
//		}
//		else {
//			tmp = 1;
//		}
//		//������1��ż����0
//	    //ͨ��ret�ӳ˷�ʽ��ÿһλ��ֵ0��1
//		ret += tmp * pow(10, i);
//		num /= 10;
//		i++;
//	 }
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//�����ַ�ʽ��n��̨�ף�һ����һ�ο�һ�ף���һ��һ�ο����ף����ж������߷�
//쳲�������ʵ������
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
//	printf("������̨������");
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	system("pause");
//	return 0;
//}
//����������ȥ�ز���������ÿ��ֻ����һ��������
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