#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	//����5�Ľ׳�
	/*int i = 2;
	int t = 1;
	while (i <= 5) {
		t = t * i;
		i++;
	}
	printf("%d\n", t);*/
	//�����ʽ1-1/2+1/3-1/4+...-1/100��ֵ
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;
	while (deno <= 100) {
		sign = -sign;
		term = sign / deno;
		sum += term;
		deno += 1;
	}
	printf("%f\n", sum);
	//����10�������������������
	/*int a[10];
	printf("������ʮ������");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > a[i + i]) {
			int tmp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tmp;
		}
	}
	printf("�����������ǣ�%d\n", a[9]);*/
	//�����������Ĵ�С˳��
	/*int a, b, c;
	printf("����������������");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);*/
	//�ж�һ�����ܷ�ͬʱ��3��5����
	/*int n;
	printf("������һ��������");
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0) {
		printf("���������ͬʱ��3��5����\n");
	}
	else {
		printf("�����������ͬʱ��3��5����\n");

	}*/
 
	system("pause");
	return 0;
}