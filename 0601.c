#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	////��һ����ϰ��һά���飩
	//int a[4] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a + 0));// 4 ���������мӼ�����ᴥ����ʽ����ת����ָ����Ԫ�ص�ָ��
	//printf("%d\n", sizeof(*a));//4 ���������н����ò���Ҳ�ᷢ����ʽ����ת����ָ�룬�ٽ����þͱ�Ϊint
	//printf("%d\n", sizeof(a + 1));// 4 ���յõ�������Ϊint*
	//printf("%d\n", sizeof(a[1]));//4 ȡ���������±�Ϊ1��Ԫ�أ�Ϊint����
	//printf("%d\n", sizeof(&a));//4  &a�õ�������Ϊint(*)[4],Ҳ����ָ������
	//printf("%d\n", sizeof(*&a));//16 int(*)[4]�ڴ˻������ٽ��н����õõ���int[4]
	//printf("%d\n", sizeof(&*a));//4  *a����ȡ��ַ�õ���Ϊint*����
	//printf("%d\n", sizeof(&a + 1));//4 int(*)[4]�����ټ�һ��������������a�ĳ��ȵ��ڴ棬����ҲΪ����ָ������
	//printf("%d\n", sizeof(&a[0] + 1));//4 &a[0]�õ���һ��ָ���0��Ԫ�ص��ڴ棬�ټ�1ָ��2������Ϊint*
	
 //   //�ڶ�����ϰ���ַ����飩
	//char a[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(a));//6 
	//printf("%d\n", sizeof(a + 0));//4 �������������������ʽ����ת�������Ϊchar*��ָ��������ͱ���Ϊ4�ֽ�
	//printf("%d\n", sizeof(*a));//1  ��ʽ����ת������Ϊchar����ָ���0��Ԫ��
	//printf("%d\n", sizeof(a[1])); //1 �����±�ָ���һ��Ԫ��Ϊchar����
	//printf("%d\n", sizeof(&a));// 4 &a�����ͱ�Ϊchar(*)[6]��Ϊָ������
	//printf("%d\n", sizeof(&a + 1));// 4 ͬ�������������ͬ
	//printf("%d\n", sizeof(&a[0] + 1));// 4 ���ս��Ϊchar*
	//printf("%d\n", sizeof(*&a));// 6 char(*)[6]�ڽ����þ�Ϊchar[6]
	//printf("%d\n", sizeof(&*a));//4  *a �õ���char���ͣ���&�õ���char*����
	//printf("%d\n", sizeof(&a + 1));//4
	//printf("%d\n", sizeof(&a[0] + 1));//4
	//printf("%d\n",strlen(a));//���Ϊδ������Ϊ���������ַ����飬�����ַ�����û��\0

	//��������ϰ(�ַ�����
	//char a[] = "abcdef";
	//printf("%d\n", sizeof(a));// 7 ����Ҫ����\0
	//printf("%d\n", sizeof(a + 0));//4
	//printf("%d\n", sizeof(*a));// 1
	//printf("%d\n", sizeof(a[1]));//1
	//printf("%d\n", sizeof(a[0] + 1));//4  a[0]�õ���char����,�ټ�1��������������������ս��Ϊint����
	//printf("%d\n", sizeof(a[1]) + 1);//2  a[1]Ϊchar����1���ٽ��м�1Ϊ2
	//printf("%d\n", sizeof(&a));//4 &a ��õ�������Ϊchar(*)[7]����Ϊָ������
	//printf("%d\n", sizeof(&a + 1));//4 ����ͬ��
	//printf("%d\n", sizeof(&a[0] + 1));// 4  ���ս��Ϊchar*
	//printf("%d\n", sizeof(*&a));// 7 char(*)[7]�ٽ����õõ�char[7]
	//printf("%d\n", sizeof(&*a));//4 �Ƚ����õõ�char,�ٽ���&�õ�char*
	//printf("%d\n", sizeof(*&a + 1));// 4 ��&�õ�char(*)[7],�ٽ����õõ�char[7],�ٽ��м�1�ִ�����ʽ����ת��Ϊchar*

	//printf("%d\n", strlen(a));// 6 strlen���ַ�����������\0����
	//printf("%d\n", strlen(a + 0));//6 �������������ʽ����ת��Ϊָ�룬ָ����Ԫ�أ��������ת��Ѱ\0
	//printf("%d\n", strlen(*a));//δ������Ϊ *a�õ���char���ͣ�strlen����ֵΪconst char*�����Ͳ�ƥ��
	//printf("%d\n", strlen(a[1]));//δ������Ϊ ���Ͳ�ƥ��
	//printf("%d\n", strlen(&a));//6 &a��õ�char(*)[7],���Ͳ�ƥ�䣬������ʽ����ת������ֵַ���䣬���������ת��\0
	//printf("%d\n", strlen(&a + 1));// δ������Ϊ��char(*)[7]��1��ָ����ת7���ֽں���ڴ棬��֪�������Ƿ������\0
	//printf("%d\n", strlen(&a[0] + 1));//5 a[0]�õ���Ԫ�أ�&��Ϊָ��a��ַ���ڴ棬�ټ�1ָ��b��Ȼ���b��ʼ��\0
	
	//��������ϰ
	char* p = "abcdef";
	printf("%d\n", sizeof(p));//4  p����Ϊchar*����
	printf("%d\n", sizeof(p + 1));//4
	printf("%d\n", sizeof(*p));//1  char*���н����õõ�char
	printf("%d\n", sizeof(p[0]));//1 ͬ��
	printf("%d\n", sizeof(&p));//4 &p�õ���Ϊ����ָ��
	printf("%d\n", sizeof(&p + 1));//4 ����ͬ��
	printf("%d\n", sizeof(&p[0] + 1));// 4  &p[0]�õ���char���ټ�1�õ���char*
	
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));// 5 ָ���ַ����еĵ�һ��Ԫ��
	printf("%d\n", strlen(*p));//δ������Ϊ ���Ͳ�ƥ��
	printf("%d\n", strlen(&p));//δ������Ϊ char**�õ����ǵ�ַ�Ĵ�ŵ�ַ��������޷�ͨ�����ҵ��ַ�����
	printf("%d\n", strlen(&p + 1));//����ͬ��
	printf("%d\n", strlen(&p[0] + 1));//5  p[0]�ȵõ���a��Ȼ��&Ϊָ��a�ĵ�ַ��Ȼ���1�õ�ָ��b�ĵ�ַ���ڴ�
    
	//�����飨��ά���飩
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48 ��ά�����а�����12��Ϊint���͵�Ԫ��
	printf("%d\n", sizeof(a[0][0]));//4 ����һ��Ԫ��
	printf("%d\n", sizeof(a[0]));//16 a[0]�õ�������Ϊint[4],����Ϊ4��һά����
	printf("%d\n", sizeof(a[0] + 1));//4 a[0]�õ�����int[4],�ټ�1�õ���int*
	printf("%d\n", sizeof(*(a[0] + 1)));//4  a[0]�õ���int[4]�ټ�1��int*,�������õõ�a[0][1] Ϊint����
	printf("%d\n", sizeof(a + 1));//4 aΪint[3][4]��1��ʽ����ת��Ϊint(*)[4]ҲΪָ������
	printf("%d\n", sizeof(*(a + 1)));//16 int(*)[4]�ٽ����õõ���Ϊint[4]
	printf("%d\n", sizeof(&a[0] + 1));//4 a[0]�õ���int[4],��&�õ�int(*)[4],�ټ�1��Ϊint(*)[4]
	printf("%d\n", sizeof(*(&a[0] + 1)));//16 int(*)[4]�ٽ����õõ���int[4]
	printf("%d\n", sizeof(*a));//16 a����ʽ����ת��Ϊint(*)[4],�ڽ����õõ�int[4]
	printf("%d\n", sizeof(a[3]));//16 a[3]��ȻԽ���ˣ�����sizeof��������ֵ��ֻ�۲���ʽ���;Ϳ��Եõ����
	system("pause");
	return 0;
}