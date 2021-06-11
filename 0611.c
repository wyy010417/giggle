#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//模拟实现strlen
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
// 使用strcpy注意事项
//int main() {
//	char* str1 = "xxxxxxx";//只读字符串，所属内存区域只读
//	char str2[] = "abcd";//无法将const char[5]转换为char*
//	strcpy(str1, str2);//错误代码
//	printf("%s\n", str1);
//}
//模拟实现strcpy
//char* myStrcpy(char* dest, const char* src) {
//	//只需把src中的每个字节都赋值给dest即可
//	assert(dest != NULL);
//	assert(src != NULL);
//	//数组下标操作
//	/*int i = 0;
//	while (src[i] != '\0') {
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';
//	return dest;*/
//	//指针操作
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
//模拟实现strcat（字符串拼接）
//char* myStrcat(char* dest, const char* src) {
//	//判定参数的合法性
//	assert(dest != NULL);
//	assert(src != NULL);
//	//方法一：
//	//找到dest的结束位置
//	//int desttail = 0;
//	//while (dest[desttail] != '\0') {
//	//	desttail++;
//	//}
//	////当循环结束，desttail就指向dest的\0位置
//	///*strcpy(dest + desttail, src);*/
//	//int i = 0;
//	//while (src[i] != '\0') {
//	//	dest[desttail + i] = src[i];
//	//	i++;
//	//}
//	//dest[desttail + i] = '\0';
//	//return dest;
//	//方法二：
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
//	//要保证str1（destination）的内存空间足够大即能够容纳source的内容
//	char str1[1024] = "I love you ";
//	char str2[] = "giggle.";
//	printf("%s\n", myStrcat(str1, str2));
//	system("pause");
//	return 0;
//}
// strcmp函数的具体表示情况
//int main() {
//	//比较俩字符串大小原则（字典序）谁靠前谁就小
//	
//	char str1[] = "hdllh";
//	char str2[] = "hello";
//	//结果返回的数不确定，大于返回整数，小于返回负数，等于返回0 
//	printf("%d\n", strcmp(str1, str2));
//	//利用中间变量记录strcmp的返回值，避免多次进行重复操作，strcmp算是计算较为复杂的函数
//    //繁琐代码：
//	if (strcmp(str1, str2) > 1) {
//		printf("str1>str2\n");//避免进行重复计算
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
//模拟实现strcmp
//int myStrcmp(const char* str1, const char* str2) {
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	//依次比较每个字符之间的大小关系
//	const char* p1 = str1;
//	const char* p2 = str2;
//	while (*p1 != '\0' && *p2 != '\0') {
//		//比较p1和p2指向的字符的大小关系
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
//			//p1先结束
//			return -1;
//		}
//		else if(*p1>*p2) {
//			//p2先结束
//			return 1;
//		}
//		else {
//			//p1和p2同时触发\0且p1，p2相等
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
//模拟实现strncpy
//char* myStrncpy(char* dest, const char* src, size_t num) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	size_t i = 0;
//	while (src[i] != '\0' && i < num) {
//		dest[i] = src[i];
//		i++;
//	}
//	//上面的循环有两种情况导致循环结束
//	//i==num,循环直接结束就可以
//	if (i == num) {
//		return dest;
//	}
//	//i<num  我们令后面字符全为\0
//	while (i < num) {
//		dest[i] = '\0';
//		i++;
//	}
//	return dest;
//}
//int main() {
//	//尽量保证str1（destination）为全0，以免造成赋值时后面没有出现\0
//	char str1[1024] = { 0 };
//	char str2[] = "abcdef";
// printf("%s\n",myStrncpy(str1,str2,sizeof(arr1)-1);
//	printf("%s\n", myStrncpy(str1, str2, sizeof(str2)));
//	system("pause");
//	return 0;
//}
//模拟实现strncat
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
//模拟实现strncmp（比较str1和str2的前num个字符）
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
//		//当上面循环结束，会由于三种情况
//		//str1先结束,返回-1
//		//str2先结束，返回1
//		//i==num，也就是str1和str2的前num个字符相同，即返回0
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