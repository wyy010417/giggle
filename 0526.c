#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	//char a = -128;
	////128����char���ͱ�ʾ�ķ�Χ,����󱻵���-128����
	//char b = 128;
	////%uΪ��ӡһ���޷���ʮ��������
	////���Ϊ4294967168,�ֽ�-128ת��Ϊ������
	////���룬�ٰ��䲹�뿴����unsigned int
	//printf("%u\n", a);
	////���ߴ�ӡ�����ͬ
	//printf("%u\n", b);

	/*int i = -20;
	unsigned int j = 10;
	//������ʽ����ת��
	printf("%d\n", i + j);*/
	//��������ʹ��unsigned int
	/*unsigned int i = 0;
	for (i = 9; i >= 0; i--) {
		printf("%u\n", i);
	}*/
	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++) {
	//	//iΪ255ʱ��-1-255=>(char)\0
	//	// int����תΪchar���ͷ�����λ�ض�
	//	// �൱�ڸ��±�255��λ������\0
	//	//��ʱ�ַ����ĳ���Ϊ255
	//	a[i] = -1 - i;
	//}
	//printf("%d\n", strlen(a));
	//double a = 1.6;
	//double b = 0.3;
	//double c = a + b;
	//double d = 1.9;
	//if (c == d) {
	//	printf("haha");
	//}
	////���Ϊ�����
	//else { printf("hehe");
	//}
	////��ι�ܸ������Ƚ��е����
	//if (c - d<0.00001 && c - d>-0.00001) {
	//	printf("���");
	//}
	//else { printf("�����");
	//}
	int arr[] = { 9,5,2,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int* p = arr; p < arr + size; p++) {
		printf("%d\n", *p);
	}
	system("pause");
	return 0;
}