#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////使用指针打印数组内容
//void Print(int* arr,int len) {
//	for (int i = 0; i < len; i++) {
//		printf("%d\n", *(arr + i));
//	}
//}
//int main() {
//	int arr[] = { 9,4,5,6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, len);
//	system("pause");
//	return 0;
//}
//字符串逆序
// 使用数组下标交换字符
//void reverseString(char* arr, int len) {
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right) {
//		char tmp = arr[left];
//		arr[left] =arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	reverseString(arr, len);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
//使用指针加减进行字符串逆序
//void reverseString(const char* arr) {
//	char* str = (char*) arr;
//	int len = strlen(arr);
//	char tmp = '\0';
//	for (int i = 0; i < len / 2; i++) {
//		tmp = *(str + i);
//		*(str+ i) = *(str + len - 1 - i);
//		*(str + len - 1 - i) = tmp;
//	}
//}
//int main() {
//	char arr[] = "abcdefg";
//	int len = strlen(arr);
//	reverseString(arr);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
////计算求和
////例如：Sn=2+22+222+2222+22222
//void sumNum(int num,int time) {
//	int sum = 0;
//	int tmp = 0;
//	for (int i = 0; i <time; i++) {
//		 tmp = tmp * 10 + num;
//		 sum += tmp;
//	}
//	printf("%d", sum);
//}
//int main() {
//	int num = 0;
//	int time = 0;
//	printf("请输入求和数，以及求和次数：");
//	scanf("%d %d", &num, &time);
//	sumNum(num, time);
//	system("pause");
//	return 0;
//}
////打印0-100000之间的所有水仙花数
//#include<math.h>
//#define M 100000
//int main(){
//	int i = 0;
//	printf("0-%d中的水仙花数为:\n", M);
//	for (i=1; i < M; i++) {
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp / 10) {
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp) {
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if(i==sum){
//			printf("%d\n", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}
//实现字符串中的单词逆序
void reverseString(char* arr,int len) {
	int left = 0;
	int right = strlen(arr) - 1;
	while(left < right) {
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void reverseWord(char* input) {
	reverseString(input, strlen(input));
	char* start = input;
	while (*start != '\0') {
		char* end = start;
		while (*end != ' ' && *end != '\0') {
			end++;
		}
		reverseString(start, end - start);
		if (*end == '\0') {
			break;
		}
		else if(*end!='\0') {
			start = end + 1;
		}
	}
}
int main() {
		char input[1024] = { 0 };
	    gets(input);
  		reverseWord(input);
		printf("%s", input);
		system("pause");
		return 0;
	}
