//����qsort����ʵ�ֽṹ���ڲ���Ա����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct imag {
//	char name[1024];
//	double grade;
//	int age;
//};//����ṹ��
//int comparNum(const void* p, const void* q) {
//	//�Ƚ��������Ĵ�С
//	return *((int*)p) - *((int*)q);
//}
//int structIntCompar(const void* p, const void* q) {
//	//�ṹ��������Ƚ�
//	return ((struct imag*)p)->age - ((struct imag*)q)->age;
//}
//int structStrCompar(const void* p, const void* q) {
//	//�ṹ�����ַ����Ƚ�
//	return (strcmp((*(struct imag*)p).name, (*(struct imag*)q).name));
//}
//int structDoubleCompar(const void* p, const void* q) {
//	//�ṹ�帡���ͱȽ�
//	return((*(struct imag*)p).grade > ((struct imag*)q)->grade);
//}
//void swapNum(void* p, void* q, int size) {
//	//����������
//	for (int i = 0; i < size; i++) {
//		char tmp = *((char*)p + i);
//		*((char*)p + i) = *((char*)q + i);
//		*((char*)q + i) = tmp;
//	}
//}
//void bubbleSort(void* arr,//Ҫ���������
//	int num,//����Ԫ�صĸ���
//	int size,//ÿ��Ԫ��ռ���ֽ���
//	int (*compar)(const void*, const void*))//����ָ�룬���ڱȽ�����Ԫ�صĴ�С
//{
//	for (int i = 0; i < num - 1; i++) {
//		for (int j = 0; j < num - 1 - i; j++) {
//			if (compar((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0) {
//				swapNum((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//			}
//		}
//	}
//}
//void printNum(int* arr, int size) {//��ӡ��������
//	for (int i = 0; i < size; i++) {
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//void printStruct(struct imag arr[], int size) {
//	printf("����\t      �ɼ�\t     ����\n");
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
//	//������������
//	printf("<��������������>\n");
//	bubbleSort(arrInt, sizeof(arrInt) / sizeof(arrInt[0]), sizeof(arrInt[0]), comparNum);
//	printNum(arrInt, sizeof(arrInt) / sizeof(arrInt[0]));
//	printf("\n");
//	//���нṹ���е�����(���䣩
//	printf("<���ṹ���еģ����䣩����>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structStrCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	//���нṹ���еĸ���������
//	printf("<���ṹ���еģ��ɼ�������>\n");
//	bubbleSort(arrStu, sizeof(arrStu) / sizeof(arrStu[0]), sizeof(arrStu[0]), structDoubleCompar);
//	printStruct(arrStu, sizeof(arrStu) / sizeof(arrStu[0]));
//	system("pause");
//	return 0;
//}
//�����������ռ���ֽ���
//int main() {
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long int));//4
//	printf("%d\n", sizeof(long long));//8
//	system("pause");
//	return 0;
//}
//��ʾһ��С�ɻ�
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
// ��һ��
//void func(int n, int* s) {
//	//���캯���ĵݹ����
//	int f=0;
//	if (n == 1) {
//		*s = n + 1;
//	}
//    //�ܹ������Ĵ�func����
//	else {
//		func(n - 1, &f);
//		*s = f;
//	}
//}
//int main() {
//	int x = 0;
//	func(4, &x);
//	printf("%d\n", x);//������Ϊ2
//	system("pause");
//	return 0;
//}
//������
//int main() {
//	int* k[10][30];
//	//��64λ����ϵͳ�У�һ��ָ�����ռ8���ֽڣ�k����int*���͵����飬������300��Ԫ��
//	printf("%d\n", sizeof(k));//������Ϊ2400��64λϵͳ��
//	//��Ϊ32λϵͳ����������Ϊ1200
//	system("pause");
//	return 0;
//}
//�����ʽ�����
//char fun(char x, char y)
//{
//	if (x)
//		return(y);
//}
//int main()
//{
//	int a = '��', b = '1', c = '2';
//	//�ַ�����������Զ�����Ϊ��ASCII�룬�����char������������Խ����Ϊ�ַ�����
//	printf("%c\n", fun(fun(a, b), fun(b, c)));
//}
//�ж�һ�������ε�����
//void func(int a, int b, int c) {
//    //�ж����Ƿ��ܹ���������
//    if (a + b > c && a - b<c && a + c>b && a - c<b && b + c>a && b - c < a) {
//        //�ж��Ƿ�Ϊ�ȱ�������
//        if (a == b && b == c) {
//            printf("Equilateral triangle!\n");
//        }
//        //�ж��Ƿ�Ϊ����������
//        else if (a == b || b == c || a == c) {
//            printf("Isosceles triangle!\n");
//        }
//        //��ǰ���߶�������Ϊ��ͨ������
//        else {
//            printf("Ordinary triangle!\n");
//        }
//    }//���򲻹���������
//    else {
//        printf("Not a triangle!\n");
//    }
//}
//int main() {
//    int a = 0, b = 0, c = 0;
//    //������Ŀ����Ϊ�˶����������ݽ����б�
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
//        func(a, b, c);
//
//    }
//    system("pause");
//    return 0;
//}
 