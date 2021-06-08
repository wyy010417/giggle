#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int(*Cmp)(void*, void*);
void myqsort(void* arr, int len, int unitlen, Cmp cmp) {
	for (int bound = 0; bound < len; bound++) {
		for (int cur = len - 1; cur > bound; cur--) {
			//Ϊ��ʹarr���void*�ܹ�������,����Ҫǿ������ת��
			//ͳһת��char*
			char* carr = (char*)arr;
			//ȡcur��cur-1
			char* p1 = carr + (cur - 1) * unitlen;
			char* p2 = carr + cur * unitlen;
			if (cmp(p1, p2) == 1) {
				//������Ҫһ����ʱ�ռ�
				char tmp[1024] = { 0 };
				//��p1���ڴ濽����tmp��
				memcpy(tmp, p1, unitlen);
				//��p2���ڴ濽����p1��
				memcpy(p1, p2, unitlen);
				//��tmp���ڴ濽����p1��
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
