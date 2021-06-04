//利用qsort函数实现结构体内部成员排序
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct imag {
//	char name[1024];
//	double grade;
//	int age;
//};//定义结构体
//int comparNum(const void* p, const void* q) {
//	//比较两个数的大小
//	return *((int*)p) - *((int*)q);
//}
//int structIntCompar(const void* p, const void* q) {
//	//结构体中年龄比较
//	return ((struct imag*)p)->age - ((struct imag*)q)->age;
//}
//int structStrCompar(const void* p, const void* q) {
//	//结构体中字符串比较
//	return (strcmp((*(struct imag*)p).name, (*(struct imag*)q).name));
//}
//int structDoubleCompar(const void* p, const void* q) {
//	//结构体浮点型比较
//	return((*(struct imag*)p).grade > ((struct imag*)q)->grade);
//}
//void swapNum(void* p, void* q, int size) {
//	//交换两个数
//	for (int i = 0; i < size; i++) {
//		char tmp = *((char*)p + i);
//		*((char*)p + i) = *((char*)q + i);
//		*((char*)q + i) = tmp;
//	}
//}
//void bubbleSort(void* arr,//要排序的数组
//	int num,//数组元素的个数
//	int size,//每个元素占的字节数
//	int (*compar)(const void*, const void*))//函数指针，用于比较两个元素的大小
//{
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - 1 - i; j++) {
//			if (compar((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0) {
//				swapNum((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//			}
//		}
//	}
//}
//void printNum(int* arr, int size) {//打印整型数组
//	for (int i = 0; i < size; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//void printStruct(struct imag arr[], int size) {
//	printf("姓名\t      成绩\t     年龄\n");
//	for (int i = 0; i < size; i++) {
//		printf("%s\t    %.2f\t     %d\n", arr[i].name, arr[i].grade, arr[i].age);
//	}
//	printf("\n");
//}
//int main() {
//	int i = 0;
//	int arrInt[10] = { 1,4,7,8,22,68,90,47,35,88 };
//	char* arrStr[] = { "bcdef","abcde","efghi","defgh","cdefg" };
//	struct imag arrStu[3] = { {"xiaoming",96.5,18},{"liuhuan",87.2,20} ,{"zhangsan",66.9,19} };
//	//排序整型数组
//	printf("<给整型数组排序>\n");
//	bubbleSort(arrInt, sizeof(arrInt) / sizeof(arrInt[0]), sizeof(arrInt[0]), comparNum);
//	printNum(arrInt, sizeof(arrInt) / sizeof(arrInt[0]));
//	printf("\n");
//	//排列结构体中的整型(年龄）
//	printf("<按结构体中的（年龄）排序>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structStrCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	//排列结构体中的浮点型数字
//	printf("<按结构体中的（成绩）排序>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structDoubleCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	system("pause");
//	return 0;
//}
//输出各整型所占的字节数
//int main() {
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long int));//4
//	printf("%d\n", sizeof(long long));//8
//	system("pause");
//	return 0;
//}
//显示一个小飞机
//int main() {
//	for (int i = 0; i < 6; i++) {
//		if (i <= 1) {
//			printf("    **    \n");
//		}
//		else if (i == 2 || i == 3) {
//			printf("**********\n");
//		}
//		else {
//			printf("   *  *  \n");
//		}
//	}
//	system("pause");
//	return 0;
//}
// 例一：
//void func(int n, int* s) {
//	//考察函数的递归调用
//	int f=0;
//	if (n == 1) {
//		*s = n + 1;
//	}
//    //总共调用四次func函数
//	else {
//		func(n - 1, &f);
//		*s = f;
//	}
//}
//int main() {
//	int x = 0;
//	func(4, &x);
//	printf("%d\n", x);//输出结果为2
//	system("pause");
//	return 0;
//}
//例二：
//int main() {
//	int* k[10][30];
//	//在64位操作系统中，一个指针变量占8个字节，k变量int*类型的数组，其中有300个元素
//	printf("%d\n", sizeof(k));//输出结果为2400（64位系统）
//	//若为32位系统，则输出结果为1200
//	system("pause");
//	return 0;
//}
//考察格式化输出
//char fun(char x, char y)
//{
//	if (x)
//		return(y);
//}
//int main()
//{
//	int a = 'θ', b = '1', c = '2';
//	//字符串计算机会自动翻译为其ASCII码，最后以char类型输出，所以结果又为字符本身
//	printf("%c\n", fun(fun(a, b), fun(b, c)));
//}
//判断一个三角形的类型
//void func(int a, int b, int c) {
//    //判断其是否能构成三角形
//    if (a + b > c && a - b<c && a + c>b && a - c<b && b + c>a && b - c < a) {
//        //判断是否为等边三角形
//        if (a == b && b == c) {
//            printf("Equilateral triangle!\n");
//        }
//        //判断是否为等腰三角形
//        else if (a == b || b == c || a == c) {
//            printf("Isosceles triangle!\n");
//        }
//        //若前两者都不是则为普通三角形
//        else {
//            printf("Ordinary triangle!\n");
//        }
//    }//否则不构成三角形
//    else {
//        printf("Not a triangle!\n");
//    }
//}
//int main() {
//    int a = 0, b = 0, c = 0;
//    //这样的目的是为了多组输入数据进行判别
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        func(a, b, c);
//
//    }
//    system("pause");
//    return 0;
//}
 