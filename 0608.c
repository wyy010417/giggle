#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int(*Cmp)(void*, void*);
void myqsort(void* arr, int len, int unitlen, Cmp cmp) {
	for (int bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			//为了使arr这个void*能够解引用,就需要强制类型转换
			//统一转成char*
			char* carr = (char*)arr;
			//取cur和cur-1
			char* p1 = carr + (cur - 1) * unitlen;
			char* p2 = carr + cur * unitlen;
			if (cmp(p1, p2) == 1) {
				//交换需要一个临时空间
				char tmp[1024] = { 0 };
				//把p1的内存拷贝到tmp上
				memcpy(tmp, p1, unitlen);
				//把p2的内存拷贝到p1上
				memcpy(p1, p2, unitlen);
				//把tmp的内存拷贝回p1上
				memcpy(p2, tmp, unitlen);
			}
		}
	}
}
int Comper(void* x, void* y) {
	int* ix = (int*)x;
	int* iy = (int*)y;
	return *ix < *iy ? 1 : 0;
}
int main() {
	int arr[] = { 9,5,7,8,2,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	myqsort(arr, len, sizeof(arr[0]), Comper);
	for (int i = 0; i < len; i++) {
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}
