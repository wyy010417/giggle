#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//��һ��
////���ʼ�Ϊָ��Ӽ���õ��ļ�Ϊ������Ӧָ���С����ڴ��ַ���ṹ����ͬ��
////�˽ṹ��Ĵ�СΪ20���ֽ�
//struct test {
//	int num;
//	char* pcName;
//	short Data;
//	char cha[2];
//	short Ba[4];
//}*p;
//int main() {
//	//��Ӧʮ�����е�20��p��Ӧ������Ϊһ���ṹ�壬���Լ�һ������Ӧ�ṹ����ڴ��С
//	printf("%p\n", p + 0x1);//00000014
//	//�����ָ�����ǿ������ת��Ϊunsigned long���ͣ�����������Ϊ00000000���ټ�һ��Ϊ1
//	printf("%p\n", (unsigned long)p + 0x1);//00000001
//	//����ṹ���������ǿ��ת��Ϊunsigned int*�ټ�һ��Ϊ������Ӧ�ڴ�
//	printf("%p\n", (unsigned int*)p + 0x1);//00000004
//	system("pause");
//	return 0;
//}
//������
//int main() {
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//p[4][2]��a[4][2]�����Ͳ�ͬ��p������Ϊint(*)[4],a���ǿ��Կ�����ͨ����
//	//��a[5][5]��������ڴ���������Ҫ����p�����������µĻ��֣�������յõ����ڴ��ַ��ͬ
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//fffffffc(���룩 -4
//	system("pause");
//	return 0;
//}
//������
//int main() {
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	//&aa�൱�ڵõ���һ����ά����ָ�����ͼ�int(*)[2][5],�ټ�1�õ�Ԫ��10 ������ڴ棬Ȼ��ǿתΪint*���ͣ��ټ�1�͵õ���10
//	int* ptr1 = (int*)(&aa + 1);
//	//*aa�͵õ���int(*)[5]���͵��ټ�1�õ�Ԫ��6����ǿת���1�õ�5
//	int* ptr2 = (int*)(*(aa+1));
//	printf("%d ,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	system("pause");
//	return 0;
//}
//���ģ�
//int main() {
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	//++cpp������һ��char***���͵�Ԫ�أ������õõ�char**���ͣ��ٽ����õõ�char*���ͣ�Ȼ��char*�ڴ����POINT��Ԫ�صĵ�ַ���Ӵ˵�ַ��ʼ��\0����
//	printf("%s\n", **++cpp);//POINT
//	//++cppҲ�������ϴ�++֮��ļ����������õ�NEW��Ԫ�صĵ�ַ�ĵ�ַ�ĵ�ַ��Ȼ����н����õõ�char**,�ٽ���--�õ�ENTER��Ԫ�صĵ�ַ�ĵ�ַ��Ȼ���ٽ��н����ã�Ȼ��õ�ENTER�ĵ�ַ��Ϊchar*����
//	//�ٽ����ú�+3����ʱ���Ǽӵ�����Ϊchar��������������ĸ���õ�ER
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	//cpp[-2]�൱��*(cpp-2)����NEW��Ԫ�ص�ַ�ĵ�ַ�ĵ�ַ�����ϼ�2���õ�FIRST��Ԫ�ص�ַ�ĵ�ַ�ĵ�ַ���ٽ��н����õõ�char**,�ٽ����õõ�char*���ټ�3������char���͵�3��
//	printf("%s\n", *cpp[-2] + 3);//ST
//	//cpp[-1]�൱��*(cpp-1)����NEW��Ԫ�ص�ַ�ĵ�ַ�ĵ�ַ������-1���õ�ENTER����Ԫ�صĵ�ַ�ĵ�ַ�ĵ�ַ���ٽ��н����õõ�char**
//	//��Դ�ʱ��char**����*(cp-1)��NEW��Ԫ�ص�ַ�ĵ�ַ���ٽ��н����õõ�char*���ͣ��ټ�1��char�����ϼ�1
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//	system("pause");
//	return 0;
//}
//ʵ��strlen�ĺ�������
//������д����ʱҪע��У������ĺϷ��ԣ����͵ľ���У��ָ��
//size_t myStrlen(const char* str) {
//	//��Ҫ�����ַ�ʽУ��
//	// 	   ifУ��Ƚ��ºͣ�assert�Ƚϼ��ң���������������
//	//�˴���У��Ҳֻ��У���ָ�룬���޷�У��Ұָ��
//	//���str����һ����ָ�룬����һ����Чָ�룬������ȻҪȥ����У��
//	size_t size = 0;
//	/*if (str == NULL) {
//		return 0;
//	}*/
//	//assert ��һ�ֶ���,��һ�ֺ�
//	//�ж������Ƿ�������������������ֱ�ӱ������������ֱ�Ӻ���
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

 