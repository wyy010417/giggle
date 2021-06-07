#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//例一：
////本质即为指针加减后得到的即为跳过相应指针大小后的内存地址（结构体相同）
////此结构体的大小为20个字节
//struct test {
//	int num;
//	char* pcName;
//	short Data;
//	char cha[2];
//	short Ba[4];
//}*p;
//int main() {
//	//对应十进制中的20，p对应的类型为一个结构体，所以加一跳过对应结构体的内存大小
//	printf("%p\n", p + 0x1);//00000014
//	//将这个指针变量强制类型转换为unsigned long类型，其变量定义后为00000000，再加一即为1
//	printf("%p\n", (unsigned long)p + 0x1);//00000001
//	//将其结构体变量类型强制转换为unsigned int*再加一即为跳过相应内存
//	printf("%p\n", (unsigned int*)p + 0x1);//00000004
//	system("pause");
//	return 0;
//}
//例二：
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//p[4][2]和a[4][2]的类型不同，p的类型为int(*)[4],a我们可以看做普通数组
//	//在a[5][5]这段数组内存上我们需要按照p的类型作出新的划分，因此最终得到的内存地址不同
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc(补码） -4
//	system("pause");
//	return 0;
//}
//例三：
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//&aa相当于得到了一个二维数组指针类型即int(*)[2][5],再加1得到元素10 后面的内存，然后强转为int*类型，再减1就得到了10
//	int* ptr1 = (int*)(&aa + 1);
//	//*aa就得到了int(*)[5]类型的再加1得到元素6，再强转后减1得到5
//	int* ptr2 = (int*)(*(aa+1));
//	printf("%d ,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//例四：
//int main() {
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	//++cpp是跳过一个char***类型的元素，解引用得到char**类型，再解引用得到char*类型，然后char*内存的是POINT首元素的地址，从此地址开始找\0即可
//	printf("%s\n", **++cpp);//POINT
//	//++cpp也就是在上次++之后的继续自增，得到NEW首元素的地址的地址的地址，然后进行解引用得到char**,再进行--得到ENTER首元素的地址的地址，然后再进行解引用，然后得到ENTER的地址，为char*类型
//	//再解引用后+3，此时我们加的类型为char，即跳过三个字母，得到ER
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	//cpp[-2]相当于*(cpp-2)即在NEW首元素地址的地址的地址基础上减2，得到FIRST首元素地址的地址的地址，再进行解引用得到char**,再解引用得到char*，再加3即跳过char类型的3次
//	printf("%s\n", *cpp[-2] + 3);//ST
//	//cpp[-1]相当于*(cpp-1)即再NEW首元素地址的地址的地址基础上-1，得到ENTER的首元素的地址的地址的地址，再进行解引用得到char**
//	//针对此时的char**进行*(cp-1)即NEW首元素地址的地址，再进行解引用得到char*类型，再加1即char基础上加1
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	system("pause");
//	return 0;
//}
//实现strlen的函数功能
//我们在写代码时要注意校验参数的合法性，典型的就是校验指针
//size_t myStrlen(const char* str) {
//	//主要有两种方式校验
//	// 	   if校验比较温和，assert比较激烈，具体问题具体分析
//	//此处的校验也只能校验空指针，而无法校验野指针
//	//如果str不是一个空指针，而是一个无效指针，我们依然要去进行校验
//	size_t size = 0;
//	/*if (str == NULL) {
//		return 0;
//	}*/
//	//assert 是一种断言,是一种宏
//	//判断条件是否成立，如果不成立程序直接崩溃，如果成立直接忽视
//	assert(str != NULL);
// 	while (str[size] != '\0') {
//		size++;
//	}
//	return size;
//}
//int main() {
//	char* p = "abcd";
//	//p=NULL;
//	printf("%d\n", myStrlen(p));
//	system("pause");
//	return 0;
//}

 