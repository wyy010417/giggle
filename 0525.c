#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//实现一个函数，可以左旋字符串中的k个字符。
//利用循环一次一次转
//void leftRound1(char* src, int time) {
//	int i, j, tmp;
//	int len = strlen(src);
//	time %= len;
//	for (i = 0; i < time; i++) {
//		tmp = src[0];
//		for (j = 0; j < len - 1; j++) {
//			src[j] = src[j + 1];
//		}
//		src[j] = tmp;
//	}
//}
// 拼接方式（利用strcpy函数左旋数组）
//void leftRound2(char* src,int time) {
//	int len = strlen(src);
//	int pos = time % len;
//	char tmp[256] = { 0 };
//	strcpy(tmp, src + pos);
//	strncat(tmp,src,pos);
//	strcpy(src,tmp);
//}
// 利用三次逆序（前逆序，后逆序，整体逆序）
//void reversePart(char* str, int start, int end) {
//	int i, j;
//	char tmp;
//	for (i = start, j = end; i < j; i++, j--) {
//		tmp = str[i];
//		str[i] = str[j];
//		str[j] = tmp;
//	}
//}
//void leftRound3(char* src, int time) {
//	int len = strlen(src);
//	int pos = time % len;
//	reversePart(src, 0, pos - 1);
//	reversePart(src, pos, len - 1);
//	reversePart(src, 0, len - 1);
//}
//int main(){ 
//	char string[8] = "ABCDEFG";
//    leftRound3(string,5);
//	printf("%s",string);
//	system("pause");
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
int findRound(const char* src, char* find) {
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) != NULL;
}
int main() {

	char string[8] = "ABCDEFG";
	char find[256] = { 0 };
	printf("请输入你要查找的字符串：");
	scanf("%s", &find);
	printf("%d", findRound(string, find));
	system("pause"); 
	return 0;
}