#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//�������������мӼ��˳�����
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
//	//�����û�������������
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d %d", &a, &b);
//	//�����û���ȷҪ���е��������
//	printf("��ѡ��Ҫ���е����㣺");
//	printf("1.�ӷ���2.������3.�˷���4.����\n");
//	int choice = 0;
//	scanf("%d", &choice);
//	//�ڴ�׼��һ������ָ������
//	Func arr[] = {
//		NULL,
//		add,
//		sub,
//		mul,
//		divsion
//	};
//
//	//�����û������ѡ�������Ӧ������
//	//���ú���ָ������
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
//		printf("�����choice����\n");
//	}*/
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//�ҳ�һ���ַ������Ӵ����������CHN�ĸ���
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
//��һ��
//int main() {
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	//*(a+1)��ʾ�Ƚ���������ʽ����ת��Ϊָ�룬ָ��������Ԫ�ص�ָ�룬Ȼ����м�1�����2���ڽ��н����õõ�2
//	//*(ptr-1)�е�ָ�����ptr�ȶ�����������ȡ��ַ�õ�int(*)[5],Ȼ���1����������������ĳ���
//	//Ȼ����int(*)[5]����ǿ��ת��Ϊint*���ͣ���˵�ַ������ݲ��䣬�ڴ�ָ��5�����Ԫ�أ��ټ�1�ͱ�Ϊָ��5�ĵ�ַ���ٽ��н�����
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	system("pause");
//	return 0;
//}
//������
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
//������
//int main() {
//	int a[4] = { 1,2,3,4 };
//	//&a+1�õ���int(*)[4]���͵�ָ����ָ��Ԫ��4��Ӧ�ĵ�ַ���棬Ȼ�����ǿתΪint*���ͣ��ٽ���-1�õ�4
//	int* ptr1 = (int*)(&a + 1);
//	//������a�ȱ�Ϊ��int*���ͣ�Ȼ��ǿ������ת��Ϊint�͵õ�������ڴ��ַ���ټ�1���൱�ڵ�ַ��1
//	//������ָ����1����ֽڵĵڶ����ֽڵĵ�ַ����ǿתΪint*���ͣ����Ǵ�1�ĵڶ����ֽڿ�ʼ����ĸ��ֽ�
//	//�ڴ����Ǿ���Ҫ�����ֽ�������⣬Ҳ�������ƴ�Ӷ��ɵ��ֽ�������������Ϊ00 00 00 02
//	//������ǵõ���16��������Ϊ2000000
//	int* ptr2 = (int*)((int)a+1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	system("pause");
//	return 0;
//}
//���ģ�
//int main(int argc,char* argv[]) {
//	//�������Ǳ���������ű��ʽ��������е���Ч����Ϊint a[3][2]={1,3,5}
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	//������һ��ָ���������ֵΪa[0],��ʱָ�����������int(*)[2]ǿ��ת��Ϊint*���ͣ�Ҳ����ָ����Ԫ��1
//    p = a[0];
//	//p[0]�൱��*��p+0��
//	printf("%d\n", p[0]);
//	system("pause");
//	return 0;
//}
// ���壺
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//&a[4][2]���ǵõ���a[4][2]�ĵ�ַ
//	//&p[4][2]��������Ҫ֪��p������Ϊint(*)[4],����aת��Ϊָ�������Ϊint(*)[5]
//	//��Ϊc����Ϊ��������������ǽ�a���¿���Ϊint(*)[4]�������¶��ڴ��еĵ�ַ���л��֡�
//	printf("a_ptr=%#p,p_ptr=%#p\n", &a[4][2], &p[4][2]);
//	//�ص���������ڽ���ǿ������ת�����ڴ������洢�����ݺ������ַ�ġ����ƺš�����
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	system("pause");
//	return 0;
//}
//������
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//&aa���ǵõ���һ��int(*)[2][5]���ͣ��ټ�1�õ���ָ��Ԫ��10����ĵ�ַ��Ȼ����ǿתΪint*�����ټ�1��õ���ָ��Ԫ��10�ĵ�ַ
//	int* ptr1 = (int*)(&aa + 1);
//	//aa+1������ʽ����ת�����õ���int(*)[5]���͵�ָ����ָ��Ԫ��6����ǿתΪint*���ͣ�Ȼ���1�����õõ�5
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//���ߣ�
//int main() {
//	char* a[] = { "work","at","alibaba" };
//	//char**�����ľ���char*�����ĵ�ַ��Ҳ���ǵ�ַ�ĵ�ַ
//	char** pa = a;
//	pa++;
//	//pa++Ҳ����������һ��char*����˴��ַ���1���˵ڶ����ַ���
//	printf("%s\n", *pa);
//	system("pause");
//	return 0;
//}