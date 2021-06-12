#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//模拟实现memcpy
//void* myMemcpy(void* dest, const void* src,size_t num) {
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	//按照字节来拷贝
//	//由于dest，src都为void*，因此不知道大小，需要进行强制类型转换
//	char* dest1 = (char*)dest;
//	const char* src1 = (const char*)src;
//	while (num--) {
//		*dest1 = *src1;
//		dest1++;
//		src1++;
//	}
//	return (ret);
//}
//int main() {
//	/*char str1[1024] = { 0 };
//	char str2[] = "giggle";
//	printf("%s\n", myMemcpy(str1, str2, sizeof(str2)));*/
//	int arr[1024] = { 0 };
//	int arr1[6] = { 1,2,3,4,5,6 };
//	myMemcpy(arr, arr1, sizeof(arr1));
//	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
//		printf("%d  ", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//模拟实现strstr
char* myStrstr(const char* str1, const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	//定义两个指针变量指向*str1和*str2
	 char* Str1 = ( char*)str1;
	 char* Str2 = ( char*)str2;
	 //定义一个指针变量从str1开始遍历
	char* s1 = NULL;
	//若这个子串为空字符串，直接返回0
	if (*str2 == '\0') {
		return NULL;
	}
	//从父串第一个字符开始遍历,看子串第一个字符与之是否相同
	while (*Str1) {
		s1 = Str1;
		Str2 = str2;
		while (*s1 && *Str2 && (*s1 == *Str2)) {
			s1++;
			Str2++;
		}
		//若直到子串遍历完成都满足条件，则str2为str1的子串
		if (*Str2 == '\0') {
			return Str1;
        }
		//若str1不等于str2的相应字符，则进行str1的指针下标移位
		else {
			Str1++;
		}
		 
	}
	
	return NULL;
}
int main() {
	char str1[] = "hello world.";
	char str2[] = "llo";
	printf("%s\n", myStrstr(str1, str2));
	system("pause");
	return 0;
}