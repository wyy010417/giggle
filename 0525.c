#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ʵ��һ�����������������ַ����е�k���ַ���
//����ѭ��һ��һ��ת
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
// ƴ�ӷ�ʽ������strcpy�����������飩
//void leftRound2(char* src,int time) {
//	int len = strlen(src);
//	int pos = time % len;
//	char tmp[256] = { 0 };
//	strcpy(tmp, src + pos);
//	strncat(tmp,src,pos);
//	strcpy(src,tmp);
//}
// ������������ǰ���򣬺�������������
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
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
int findRound(const char* src, char* find) {
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) != NULL;
}
int main() {

	char string[8] = "ABCDEFG";
	char find[256] = { 0 };
	printf("��������Ҫ���ҵ��ַ�����");
	scanf("%s", &find);
	printf("%d", findRound(string, find));
	system("pause"); 
	return 0;
}