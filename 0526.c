#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	//char a = -128;
	////128超出char类型表示的范围,溢出后被当做-128处理
	//char b = 128;
	////%u为打印一个无符号十进制整数
	////结果为4294967168,现将-128转换为整数，
	////求补码，再把其补码看作是unsigned int
	//printf("%u\n", a);
	////二者打印结果相同
	//printf("%u\n", b);

	/*int i = -20;
	unsigned int j = 10;
	//触发隐式类型转换
	printf("%d\n", i + j);*/
	//尽量避免使用unsigned int
	/*unsigned int i = 0;
	for (i = 9; i >= 0; i--) {
		printf("%u\n", i);
	}*/
	//char a[1000];
	//int i;
	//for (i = 0; i < 1000; i++) {
	//	//i为255时，-1-255=>(char)\0
	//	// int类型转为char类型发生高位截断
	//	// 相当于给下标255的位置设置\0
	//	//此时字符串的长度为255
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
	////结果为不相等
	//else { printf("hehe");
	//}
	////如何规避浮点数比较中的误差
	//if (c - d<0.00001 && c - d>-0.00001) {
	//	printf("相等");
	//}
	//else { printf("不相等");
	//}
	int arr[] = { 9,5,2,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int* p = arr; p < arr + size; p++) {
		printf("%d\n", *p);
	}
	system("pause");
	return 0;
}