#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//ģ��ʵ��memcpy
//void* myMemcpy(void* dest, const void* src,size_t num) {
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	assert(num != 0);
//	//�����ֽ�������
//	//����dest��src��Ϊvoid*����˲�֪����С����Ҫ����ǿ������ת��
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
//ģ��ʵ��strstr
char* myStrstr(const char* str1, const char* str2) {
	assert(str1 != NULL);
	assert(str2 != NULL);
	//��������ָ�����ָ��*str1��*str2
	 char* Str1 = ( char*)str1;
	 char* Str2 = ( char*)str2;
	 //����һ��ָ�������str1��ʼ����
	char* s1 = NULL;
	//������Ӵ�Ϊ���ַ�����ֱ�ӷ���0
	if (*str2 == '\0') {
		return NULL;
	}
	//�Ӹ�����һ���ַ���ʼ����,���Ӵ���һ���ַ���֮�Ƿ���ͬ
	while (*Str1) {
		s1 = Str1;
		Str2 = str2;
		while (*s1 && *Str2 && (*s1 == *Str2)) {
			s1++;
			Str2++;
		}
		//��ֱ���Ӵ�������ɶ�������������str2Ϊstr1���Ӵ�
		if (*Str2 == '\0') {
			return Str1;
        }
		//��str1������str2����Ӧ�ַ��������str1��ָ���±���λ
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