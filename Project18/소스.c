#include <stdio.h>
void swap(int * x, int * y);
void main()
{
	int i = 1, j = 2;

	printf("i = %d, j = %d\n", i, j);
	swap(&i, &j);
	printf("i = %d, j = %d\n", i, j);
}

void swap(int* x, int* y)
// x = &i(100), y = &j(104) 
{
	int tmp;
	tmp = *x; // tmp = i; 100�������ִ� ��(1)�� temp�� �����ÿ�
	*x = *y; // i=j; 104������ �ִ°�(2)�� 100������ �����ÿ�     
	*y = tmp;// j=temp; temp�� �ִ� ��(1)�� 104������ �����ÿ�
}
