#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//��������������С������
//void isMinGongBei(int a, int b) {
//	int min = a < b?a: b;
//	int result = 1;
//	for (int i = 1; i <= min; i++) {
//		if (a % i == 0 && b % i == 0) {
//			result = (a * b) / i;
//		}
//		else {
//			result = a * b;
//		}
//	}
//	printf("%d", result);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d,%d", &a, &b);
//	isMinGongBei(a, b);
//	 
//	system("pause");
//	return 0;
//}
// ��0��100��9�ĸ���
//int nineCount() {
//	int count = 0;
//	for (int i = 1; i < 100; i++) {
//		if (i / 10 == 9) {
//			count++;
//		}
//		if (i % 10 == 9) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	printf("%d",nineCount());
//	system("pause");
//	return 0;
//}
// �ҳ�ʮ�����е������
//int getMaxNum(int arr[],int size) {
//	int maxNum = arr[0];
//	for (int i = 0; i < size; i++) {
//		if (maxNum < arr[i]) {
//			maxNum = arr[i];
//		}
//	}
//	return maxNum;
//}
//int main() {
//	int arr[10] = { 4,8,12,46,78,100,48,89,28,33 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int result = getMaxNum(arr, len);
//	printf("%d", result);
//	system("pause");
//	return 0;
//}
//���ֲ���
//int binarySearch(int arr[],int num, int size) {
//	int mid = 0;
//	int left = 0;
//	int right = size - 1;
//	while(left <= right ) {
//		mid = (left + right) / 2;
//		if (num < arr[mid]) {
//			right = mid;
//		}
//		else if (num >arr[mid]) {
//			left = mid;
//		}
//		else return mid;
//	}
//	return -1;
//}
//int main() {
//	int arr[] = { 12,23,34,45,56,67,78,89,90 };
//	int num = 0;
//	printf("������Ҫ���ҵ�����");
//	scanf("%d", &num);
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int tmp = binarySearch(arr, num, len);
//	if (tmp != -1) {
//		printf("���������λ��Ϊ��%d\n", tmp);
//	}
//	system("pause");
//	return 0;
//}