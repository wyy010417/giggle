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
//	//�ں���foobar�ж�ָ��ı仯û��Ӱ�쵽��������ֻ����˫��ָ�������ָ��
//	foobar(a, &b, &p);
//	//����foobar��a��ֵ�ǰ�ֵ���ݣ���˲���Ӱ����������a��ֵ
//	//������b���ݵ�����������b��ָ�룬���b=p
//	//����pָ����Ǻ���foobar�ھֲ�����a�ĵ�ַ��ԭ��ָ������ݲ�����Ӱ��
//	// 
//	//���н��Ϊa=1,b=2,c=3,*p=2
//	printf("a=%d,b=%d,c=%d,*p=%d\n", a, b, c,*p);
//	system("pause");
//	return 0;
//}
//void main() {
//	long y = -43456;
//	//%-8ld��ʾ���ռ8���ո��λ�ã�����룬�ұ߶���λ�ò��ո�
//	//%08ld��ʾ���ռ8���ո��λ�ã��Ҷ��룬��߶���λ�ò�0
//	//%+8ld��ʾ���ռ8���ո��λ�ã��Ҷ��룬�����λ�ò��ո�
//	printf("y=|%-8ld|y=|%-08ld|y=|%08ldl|y=|%+8ld|", y, y, y, y);
//	system("pause");
//	return 0;
//}
//int main() {
//	int a = 1, b = 2, m = 0, n = 0, k;
//	//��ִ���ж����Ϊ0�����&&����ı��ʽ����ִ��
//	k = (n = b < a) && (m = a);
//	printf("%d,%d\n", k, m);
//	system("pause");
//	return 0;
//}
//int main() {
//	int i = 1, j = 3, k = 0, sum = 5;
//	switch (k > -i++) {
//	case 2:sum += 1;
//    //k>-i++�ñ��ʽ�Ľ��Ϊ�棬���ִ��case1��ִ�н������ڴ˺���break���
//	//���ν���ִ��case0����ʱ��i����i++������2����˽��Ϊ10
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
//	//aΪ0��i++��Ϊ1
//	int a = i++;
//	//bΪ1��++a��Ϊ1
//	int b = ++a;
//	int c = a + b;
//	//��Ŀ�����aΪ1����ʾ�棬���ȡb��ֵΪ1
//	printf("%d", a ? b : c);
//	system("pause");
//	return 0;
//}
//int main() {
//	//040�ǰ˽��ƣ�ת��Ϊ������Ϊ0010 0000
//	char x = 040;
//	//x<<1���Ƕ����Ƶ�0100 0000��ת��Ϊʮ����Ϊ64��ת��Ϊ�˽���Ϊ100
//	//%o���԰˽����������˽��Ϊ100
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
//	//cur��Ϊobject����ָ��
//	//�����һ��ռλ��ʱ���Ƚ�curǿ��ת�����ַ���ָ��Ȼ���2����ָ��obj_array����ĵ�һ��Ԫ���е��ַ�c
//	//�ڶ���ռλ�����ʱ�����Ƚ�curָ���2����ָ��Obj_array������Ԫ�صĵ�ַ����ǿ��ת��Ϊ�ַ���ָ�룬�ٽ����õõ�g
//	printf("%c %c", *(char*)((char*)(cur)+2), *(char*)(cur + 2));
//	system("pause");
//	return 0;
//}
//void fun(int* s) {
//	//static ����һ���ֲ��������ı�������������������ڣ�������������
//	//��˵ڶ���ѭ����j�Ŀ�ʼλ��Ϊj=2����Ȼ����������������do��仹Ҫ��ִ��һ��
//	static int j = 0;
//	do {
//		s[j] += s[j + 1];
//	} 	while (++j < 2);
//}
//int main() {
//	int i, a[10] = { 1,2,3,4,5 };
//	for (i = 1; i < 3; i++) {
//		//ͨ��ָ�봫�ν�a������Ԫ�ش���fun������
//		//��һ��ѭ�� a������Ԫ�ر�Ϊ{3,5,3,4,5}
//		//�ڶ���ѭ�� a������Ԫ�ر�Ϊ{3,5,7,4,5}
//		fun(a);
//	}
//	for (i = 1; i < 5; i++) {
//		//ѭ���ĴΣ����±�Ϊ1��Ԫ�ؿ�ʼ����ӡ���
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
 