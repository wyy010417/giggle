#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//实现strcat函数
//char* myStrcat(char* dest, const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest) {
//		dest++;
//	}
//	while(*dest++ = *src) {
//		src++;
//	}
//	return ret;
//}
//int main() {
//	char str1[] = "abcd";
//	char str2[] = "efg";
//	printf("%s\n", myStrcat(str1,str2));
//	system("pause");
//	return 0;
//		
//}
//实现strcmp函数
//int myStrcmp(const char* src, const char* dest) {
//	int ret = 0;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dest) && *dest) {
//		++src;
//		++dest;
//	}
//	if (ret < 0) {
//		ret = -1;
//	}
//	else if (ret > 0) {
//		ret = 1;
//	}
//	return (ret);
//}
//int main() {
//	char str1[] = "abcdefg";
//	char str2[] = "defg";
//	printf("%d", myStrcmp(str1, str2));
//	system("pause");
//	return 0;
//}
//实现strcpy函数
//char* myStrcpy( char* dest,  const char* src) {
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src) {
//		src++;
//	}
//	return ret;
//}
//int main() {
//	char str1[1024] = { 0 };
//	char str2[] = "abcd";
//	printf("%s", myStrcpy(str1, str2));
//	system("pause");
//	return 0;
//}
//实现strlen函数
int myStrlen(const char* src) {
	int ret = 0;
	assert(src != NULL);
	while (*src != '\0') {
		ret++;
		src++;
	}
	return ret;
}
int main() {
	printf("%d\n", myStrlen("abcdefg"));
	system("pause");
	return 0;
}