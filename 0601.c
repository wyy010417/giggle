#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	////第一组练习（一维数组）
	//int a[4] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));// 4 数组名进行加减运算会触发隐式类型转换成指向首元素的指针
	//printf("%d\n", sizeof(*a));//4 数组名进行解引用操作也会发生隐式类型转换成指针，再解引用就变为int
	//printf("%d\n", sizeof(a + 1));// 4 最终得到的类型为int*
	//printf("%d\n", sizeof(a[1]));//4 取到了数组下标为1的元素，为int类型
	//printf("%d\n", sizeof(&a));//4  &a得到的类型为int(*)[4],也属于指针类型
	//printf("%d\n", sizeof(*&a));//16 int(*)[4]在此基础上再进行解引用得到了int[4]
	//printf("%d\n", sizeof(&*a));//4  *a进行取地址得到的为int*类型
	//printf("%d\n", sizeof(&a + 1));//4 int(*)[4]类型再加一就是跳过了数组a的长度的内存，最终也为数组指针类型
	//printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]得到了一个指向第0个元素的内存，再加1指向2，类型为int*
	
 //   //第二组练习（字符数组）
	//char a[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(a));//6 
	//printf("%d\n", sizeof(a + 0));//4 数组名进行运算后发生隐式类型转换，结果为char*，指针变量类型本身都为4字节
	//printf("%d\n", sizeof(*a));//1  隐式类型转换后结果为char类型指向第0个元素
	//printf("%d\n", sizeof(a[1])); //1 数组下标指向第一个元素为char类型
	//printf("%d\n", sizeof(&a));// 4 &a后类型变为char(*)[6]仍为指针类型
	//printf("%d\n", sizeof(&a + 1));// 4 同上述情况解释相同
	//printf("%d\n", sizeof(&a[0] + 1));// 4 最终结果为char*
	//printf("%d\n", sizeof(*&a));// 6 char(*)[6]在解引用就为char[6]
	//printf("%d\n", sizeof(&*a));//4  *a 得到了char类型，再&得到了char*类型
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n",strlen(a));//结果为未定义行为，这属于字符数组，不是字符串，没有\0

	//第三组练习(字符串）
	//char a[] = "abcdef";
	//printf("%d\n", sizeof(a));// 7 其中要包含\0
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));// 1
	//printf("%d\n", sizeof(a[1]));//1
	//printf("%d\n", sizeof(a[0] + 1));//4  a[0]得到了char类型,再加1，会进行整型提升，最终结果为int类型
	//printf("%d\n", sizeof(a[1]) + 1);//2  a[1]为char类型1，再进行加1为2
	//printf("%d\n", sizeof(&a));//4 &a 后得到的类型为char(*)[7]，仍为指针类型
	//printf("%d\n", sizeof(&a + 1));//4 解释同上
	//printf("%d\n", sizeof(&a[0] + 1));// 4  最终结果为char*
	//printf("%d\n", sizeof(*&a));// 7 char(*)[7]再解引用得到char[7]
	//printf("%d\n", sizeof(&*a));//4 先解引用得到char,再进行&得到char*
	//printf("%d\n", sizeof(*&a + 1));// 4 先&得到char(*)[7],再解引用得到char[7],再进行加1又触发隐式类型转换为char*

	//printf("%d\n", strlen(a));// 6 strlen求字符串长度遇到\0结束
	//printf("%d\n", strlen(a + 0));//6 数组名运算后隐式类型转换为指针，指向首元素，再向后跳转找寻\0
	//printf("%d\n", strlen(*a));//未定义行为 *a得到了char类型，strlen返回值为const char*，类型不匹配
	//printf("%d\n", strlen(a[1]));//未定义行为 类型不匹配
	//printf("%d\n", strlen(&a));//6 &a后得到char(*)[7],类型不匹配，触发隐式类型转换，地址值不变，继续向后跳转找\0
	//printf("%d\n", strlen(&a + 1));// 未定义行为，char(*)[7]加1后指向跳转7个字节后的内存，不知道后面是否会遇到\0
	//printf("%d\n", strlen(&a[0] + 1));//5 a[0]得到首元素，&后为指向a地址的内存，再加1指向b，然后从b开始找\0
	
	//第四组练习
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4  p变量为char*类型
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1  char*进行解引用得到char
	printf("%d\n", sizeof(p[0]));//1 同上
	printf("%d\n", sizeof(&p));//4 &p得到的为二级指针
	printf("%d\n", sizeof(&p + 1));//4 类型同上
	printf("%d\n", sizeof(&p[0] + 1));// 4  &p[0]得到了char，再加1得到了char*
	
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));// 5 指向字符串中的第一个元素
	printf("%d\n", strlen(*p));//未定义行为 类型不匹配
	printf("%d\n", strlen(&p));//未定义行为 char**得到的是地址的存放地址，结果是无法通过这找到字符串的
	printf("%d\n", strlen(&p + 1));//解释同上
	printf("%d\n", strlen(&p[0] + 1));//5  p[0]先得到了a，然后&为指向a的地址，然后加1得到指向b的地址的内存
    
	//第五组（二维数组）
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 二维数组中包含了12个为int类型的元素
	printf("%d\n", sizeof(a[0][0]));//4 其中一个元素
	printf("%d\n", sizeof(a[0]));//16 a[0]得到的类型为int[4],长度为4的一维数组
	printf("%d\n", sizeof(a[0] + 1));//4 a[0]得到的是int[4],再加1得到了int*
	printf("%d\n", sizeof(*(a[0] + 1)));//4  a[0]得到了int[4]再加1到int*,最后解引用得到a[0][1] 为int类型
	printf("%d\n", sizeof(a + 1));//4 a为int[3][4]加1隐式类型转换为int(*)[4]也为指针类型
	printf("%d\n", sizeof(*(a + 1)));//16 int(*)[4]再解引用得到的为int[4]
	printf("%d\n", sizeof(&a[0] + 1));//4 a[0]得到了int[4],再&得到int(*)[4],再加1仍为int(*)[4]
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 int(*)[4]再解引用得到了int[4]
	printf("%d\n", sizeof(*a));//16 a先隐式类型转换为int(*)[4],在解引用得到int[4]
	printf("%d\n", sizeof(a[3]));//16 a[3]虽然越界了，但是sizeof编译期求值，只观察表达式类型就可以得到结果
	system("pause");
	return 0;
}