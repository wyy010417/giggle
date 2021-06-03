#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//对两个整数进行加减乘除运算
//int add(int x, int y) {
//	return x + y;
//}
//int sub(int x,int y){
//	return x - y;
//}
//int mul(int x, int y) {
//	return x * y;
//}
//int divsion(int x, int y) {
//	return x / y;
//}
//typedef int(*Func)(int , int );
//int main() {
//	
//	//先让用户输入两个整数
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a, &b);
//	//再让用户明确要进行的运算规则
//	printf("请选择要进行的运算：");
//	printf("1.加法；2.减法；3.乘法；4.除法\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	//在此准备一个函数指针数组
//	Func arr[] = {
//		NULL,
//		add,
//		sub,
//		mul,
//		divsion
//	};
//
//	//根据用户输入的选择进行相应的运算
//	//调用函数指针数组
//	int ret = arr[choice](a, b);
//	/*if (choice == 1) {
//		ret = add(a, b);
//	}
//	else if (choice == 2) {
//		ret = sub(a, b);
//	}
//	else if (choice == 3) {
//		ret = mul(a, b);
//	}
//	else if (choice == 4) {
//		ret = divsion(a,b);
//	}
//	else {
//		printf("输入的choice有误\n");
//	}*/
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//找出一个字符串中子串里面包含的CHN的个数
//int main() {
//	char str[8000] = { 0 };
//	int count = 0;
//	scanf("%s", &str);
//	char* p = str;
//	int c = 0;
//	int ch = 0;
//	int chn = 0;
//	while (*p) {
//		if (*p == 'C') {
//			c++;
//		}
//		else if (*p == 'H') {
//			ch += c;
//		}
//		else if (*p == 'N') {
//			chn += ch;
//		}
//		p++;
//	}
//	printf("%d\n", chn);
//	system("pause");
//	return 0;
//}
//例一：
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//*(a+1)表示先将数组名隐式类型转换为指针，指向数组首元素的指针，然后进行加1后调到2，在进行解引用得到2
//	//*(ptr-1)中的指针变量ptr先对数组名进行取地址得到int(*)[5],然后加1就是跳过整个数组的长度
//	//然后将其int(*)[5]类型强制转换为int*类型，因此地址存的内容不变，内存指向5后面的元素，再减1就变为指向5的地址，再进行解引用
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}
//例二：
//struct Test {
//	int num;
//	char* pcName;
//	short Date;
//	char cha[2];
//	short Ba[4];
//}*p;
// 
//int main() {
//	printf("%p\n", (unsigned long*)p + 0x1);
//	printf("%x\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//}
//例三：
//int main() {
//	int a[4] = { 1,2,3,4 };
//	//&a+1得到了int(*)[4]类型的指针且指向元素4对应的地址后面，然后进行强转为int*类型，再进行-1得到4
//	int* ptr1 = (int*)(&a + 1);
//	//数组名a先变为了int*类型，然后强制类型转换为int就得到了这个内存地址，再加1就相当于地址加1
//	//这样就指向了1这段字节的第二个字节的地址，再强转为int*类型，就是从1的第二个字节开始向后四个字节
//	//在此我们就需要考虑字节序的问题，也就是这段拼接而成的字节序里面存的数字为00 00 00 02
//	//因此我们得到的16进制数据为2000000
//	int* ptr2 = (int*)((int)a+1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}
//例四：
//int main(int argc,char* argv[]) {
//	//首先我们必须清楚逗号表达式，因此其中的有效数字为int a[3][2]={1,3,5}
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	//创建了一个指针变量，赋值为a[0],此时指针变量类型由int(*)[2]强制转换为int*类型，也就是指向首元素1
//    p = a[0];
//	//p[0]相当于*（p+0）
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}
// 例五：
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//&a[4][2]就是得到了a[4][2]的地址
//	//&p[4][2]我们首先要知道p的类型为int(*)[4],数组a转换为指针的类型为int(*)[5]
//	//因为c语言为弱类型吗，因此我们将a重新看做为int(*)[4]类型重新对内存中的地址进行划分。
//	printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
//	//重点理解我们在进行强制类型转换后内存中所存储的内容和这个地址的“门牌号”不变
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}
//例六：
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//&aa我们得到了一个int(*)[2][5]类型，再加1得到了指向元素10后面的地址，然后将其强转为int*类型再减1后得到了指向元素10的地址
//	int* ptr1 = (int*)(&aa + 1);
//	//aa+1触发隐式类型转换，得到了int(*)[5]类型的指针且指向元素6，再强转为int*类型，然后减1解引用得到5
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//例七：
//int main() {
//	char* a[] = { "work","at","alibaba" };
//	//char**里面存的就是char*变量的地址，也就是地址的地址
//	char** pa = a;
//	pa++;
//	//pa++也就是跳过了一个char*，因此从字符串1到了第二个字符串
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}