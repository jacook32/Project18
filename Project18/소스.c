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
	tmp = *x; // tmp = i; 100번지에있는 값(1)을 temp에 넣으시오
	*x = *y; // i=j; 104번지에 있는값(2)을 100번지에 넣으시오     
	*y = tmp;// j=temp; temp에 있는 값(1)을 104번지에 넣으시오
}
