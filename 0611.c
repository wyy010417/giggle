#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//ģ��ʵ��strlen
//int myStrlen(const char* str) {
//	assert(str != NULL);
//	size_t size = 0;
//	while (str[size]!='\0') {
//		size++;
//	}
//	return size;
//}
//int main() {
//	char str[] = "abcdef";
//	printf("%d\n", myStrlen(str));
//	system("pause");
//	return 0;
//}
// ʹ��strcpyע������
//int main() {
//	char* str1 = "xxxxxxx";//ֻ���ַ����������ڴ�����ֻ��
//	char str2[] = "abcd";//�޷���const char[5]ת��Ϊchar*
//	strcpy(str1, str2);//�������
//	printf("%s\n", str1);
//}
//ģ��ʵ��strcpy
//char* myStrcpy(char* dest, const char* src) {
//	//ֻ���src�е�ÿ���ֽڶ���ֵ��dest����
//	assert(dest != NULL);
//	assert(src != NULL);
//	//�����±����
//	/*int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';
//	return dest;*/
//	//ָ�����
//	/*char* ret = dest;
//	while (*src != '\0') {
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main() {
//	char str1[1024] = { 0 };
//	char str2[] = "giggle";
//	printf("%s\n", myStrcpy(str1, str2));
//	system("pause");
//	return 0;
//}*/
//ģ��ʵ��strcat���ַ���ƴ�ӣ�
//char* myStrcat(char* dest, const char* src) {
//	//�ж������ĺϷ���
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����һ��
//	//�ҵ�dest�Ľ���λ��
//	//int desttail = 0;
//	//while (dest[desttail] != '\0') {
//	//	desttail++;
//	//}
//	////��ѭ��������desttail��ָ��dest��\0λ��
//	///*strcpy(dest + desttail, src);*/
//	//int i = 0;
//	//while (src[i] != '\0') {
//	//	dest[desttail + i] = src[i];
//	//	i++;
//	//}
//	//dest[desttail + i] = '\0';
//	//return dest;
//	//��������
//	char* ret = dest;
//	while (*dest) {
//		dest++;
//	}
//	while (*dest++ = *src) {
//		src++;
//	}
//	return ret;
//}
//int main() {
//	//Ҫ��֤str1��destination�����ڴ�ռ��㹻���ܹ�����source������
//	char str1[1024] = "I love you ";
//	char str2[] = "giggle.";
//	printf("%s\n", myStrcat(str1, str2));
//	system("pause");
//	return 0;
//}
// strcmp�����ľ����ʾ���
//int main() {
//	//�Ƚ����ַ�����Сԭ���ֵ���˭��ǰ˭��С
//	
//	char str1[] = "hdllh";
//	char str2[] = "hello";
//	//������ص�����ȷ�������ڷ���������С�ڷ��ظ��������ڷ���0 
//	printf("%d\n", strcmp(str1, str2));
//	//�����м������¼strcmp�ķ���ֵ�������ν����ظ�������strcmp���Ǽ����Ϊ���ӵĺ���
//    //�������룺
//	if (strcmp(str1, str2) > 1) {
//		printf("str1>str2\n");//��������ظ�����
//	}
//	int ret = strcmp(str1, str2);
//	if (ret < 0) {
//		printf("str1<str2\n");
//	}
//	else if (ret > 0) {
//		printf("str1>str2\n");
//	}
//	else {
//		printf("str1==str2\n");
//	}
//	system("pause");
//	return 0;
//}
//ģ��ʵ��strcmp
//int myStrcmp(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//���αȽ�ÿ���ַ�֮��Ĵ�С��ϵ
//	const char* p1 = str1;
//	const char* p2 = str2;
//	while (*p1 != '\0' && *p2 != '\0') {
//		//�Ƚ�p1��p2ָ����ַ��Ĵ�С��ϵ
//		if (*p1 <*p2) {
//			return -1;
//		}
//		else if (*p1 > *p2) {
//			return 1;
//		}
//		else {
//			p1++;
//			p2++;
//		}
//		if (*p1 < *p2) {
//			//p1�Ƚ���
//			return -1;
//		}
//		else if(*p1>*p2) {
//			//p2�Ƚ���
//			return 1;
//		}
//		else {
//			//p1��p2ͬʱ����\0��p1��p2���
//			return 0;
//		}
//	}
//}
//int main() {
//	char str1[] = "abcd";
//	char str2[] = "acde";
//	printf("%d\n", myStrcmp(str1, str2));
//	system("pause");
//	return 0;
//}
//ģ��ʵ��strncpy
//char* myStrncpy(char* dest, const char* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	size_t i = 0;
//	while (src[i] != '\0' && i < num) {
//		dest[i] = src[i];
//		i++;
//	}
//	//�����ѭ���������������ѭ������
//	//i==num,ѭ��ֱ�ӽ����Ϳ���
//	if (i == num) {
//		return dest;
//	}
//	//i<num  ����������ַ�ȫΪ\0
//	while (i < num) {
//		dest[i] = '\0';
//		i++;
//	}
//	return dest;
//}
//int main() {
//	//������֤str1��destination��Ϊȫ0��������ɸ�ֵʱ����û�г���\0
//	char str1[1024] = { 0 };
//	char str2[] = "abcdef";
// printf("%s\n",myStrncpy(str1,str2,sizeof(arr1)-1);
//	printf("%s\n", myStrncpy(str1, str2, sizeof(str2)));
//	system("pause");
//	return 0;
//}
//ģ��ʵ��strncat
//char* myStrncat(char* dest, const char* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	size_t desttail = 0;
//	while (dest[desttail] != '\0') {
//		desttail++;
//	}
//	size_t i = 0;
//	while (src[i] != '\0' && i < num) {
//		dest[desttail + i] = src[i]; 
//		i++;
//	}
//	dest[desttail+i] = '\0';
//	return dest;
//}
//int main() {
//	char str1[1024] = "hello ";
//	char str2[] = "giggle.";
//	printf("%s\n", myStrncat(str1, str2, sizeof(str2)));
//	system("pause");
//	return 0;
//}
//ģ��ʵ��strncmp���Ƚ�str1��str2��ǰnum���ַ���
//int myStrncmp(const char* str1, const char* str2,size_t num) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	assert(num != 0);
//	size_t i = 0;
//	while (str1[i] != '\0' && str2[i] != '\0' && i < num) {
//		if (str1[i] > str2[i]) {
//			return 1;
//		}
//		else if (str1[i] < str2[i]) {
//			return -1;
//		}
//		else {
//			i++;
//		}
//		//������ѭ���������������������
//		//str1�Ƚ���,����-1
//		//str2�Ƚ���������1
//		//i==num��Ҳ����str1��str2��ǰnum���ַ���ͬ��������0
//		
//		}
//	if (str1[i] == '\0') {
//		return -1;
//	}
//	else if (str2[i] == '\0') {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//	}
//
//int main() {
//	char str1[] = "abcd";
//	char str2[] = "acde";
//	printf("%d\n", myStrncmp(str1, str2, sizeof(str1)));
//	system("pause");
//	return 0;
//}