#include<stdio.h>
#include<stdlib.h>

//void foobar(int* a, int* b, int** c) {
//	int* p = &a;
//	*p = 101;
//	*c = b;
//	b = p;
//}
//int main() {
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int* p = &c;
//	//在函数foobar中对指针的变化没有影响到主函数，只是让双重指针更换了指向
//	foobar(a, &b, &p);
//	//函数foobar中a的值是按值传递，因此不会影响主函数中a的值
//	//函数中b传递的是主函数中b的指针，语句b=p
//	//其中p指向的是函数foobar内局部变量a的地址，原来指向的数据不会有影响
//	// 
//	//运行结果为a=1,b=2,c=3,*p=2
//	printf("a=%d,b=%d,c=%d,*p=%d\n", a, b, c,*p);
//	system("pause");
//	return 0;
//}
//void main() {
//	long y = -43456;
//	//%-8ld表示输出占8个空格的位置，左对齐，右边多余位置补空格
//	//%08ld表示输出占8个空格的位置，右对齐，左边多余位置补0
//	//%+8ld表示输出占8个空格的位置，右对齐，左多余位置补空格
//	printf("y=|%-8ld|y=|%-08ld|y=|%08ldl|y=|%+8ld|", y, y, y, y);
//	system("pause");
//	return 0;
//}
//int main() {
//	int a = 1, b = 2, m = 0, n = 0, k;
//	//先执行判断语句为0，因此&&后面的表达式不再执行
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//	system("pause");
//	return 0;
//}
//int main() {
//	int i = 1, j = 3, k = 0, sum = 5;
//	switch (k > -i++) {
//	case 2:sum += 1;
//    //k>-i++该表达式的结果为真，因此执行case1，执行结束由于此后无break语句
//	//依次接着执行case0，此时的i经过i++后变成了2，因此结果为10
//	case 1:sum += j;
//	case 0:sum += i;break;
//	case -1:sum += -1;
//	}
//	printf("%d", sum);
//	system("pause");
//	return 0;
//}
//int main() {
//	int i = 0;
//	//a为0，i++后为1
//	int a = i++;
//	//b为1，++a后为1
//	int b = ++a;
//	int c = a + b;
//	//三目运算符a为1，表示真，因此取b的值为1
//	printf("%d", a ? b : c);
//	system("pause");
//	return 0;
//}
//int main() {
//	//040是八进制，转换为二级制为0010 0000
//	char x = 040;
//	//x<<1后是二进制的0100 0000，转换为十进制为64，转换为八进制为100
//	//%o是以八进制输出，因此结果为100
//	printf("%o\n", x << 1);
//	system("pause");
//	return 0;
//}
//typedef struct object object;
//struct object {
//	char data[3];
//};
//int main() {
//	object obj_array[3] = { {'a','b','c'},{'d','e','f'},{'g','h','i'} };
//	object* cur = obj_array;
//	//cur本为object类型指针
//	//输出第一个占位符时，先将cur强制转化成字符型指针然后加2，即指向obj_array数组的第一个元素中的字符c
//	//第二个占位符输出时参数先将cur指针加2，即指向Obj_array第三个元素的地址，再强制转化为字符型指针，再解引用得到g
//	printf("%c %c", *(char*)((char*)(cur)+2), *(char*)(cur + 2));
//	system("pause");
//	return 0;
//}
//void fun(int* s) {
//	//static 修饰一个局部变量，改变了这个变量的生命周期，跟随整个程序
//	//因此第二次循环是j的开始位置为j=2，虽然不满足条件，但是do语句还要再执行一次
//	static int j = 0;
//	do {
//		s[j] += s[j + 1];
//	} 	while (++j < 2);
//}
//int main() {
//	int i, a[10] = { 1,2,3,4,5 };
//	for (i = 1; i < 3; i++) {
//		//通过指针传参将a数组中元素传入fun函数中
//		//第一次循环 a数组中元素变为{3,5,3,4,5}
//		//第二次循环 a数组中元素变为{3,5,7,4,5}
//		fun(a);
//	}
//	for (i = 1; i < 5; i++) {
//		//循环四次，从下标为1的元素开始，打印输出
//		printf("%d", a[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}
//int main() {
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n') {
//		if (a % 2 != 0 && (ch >='a' && ch<= 'z')) {
//			ch = ch - 'a' + 'A';
//			a++;
//			putchar(ch);
//		}   
//	}
//	printf("\n");
//	system("pause");
//	return 0;
// }
 