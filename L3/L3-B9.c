/*ex 9. Sa se inverseze 2 nr natuurale fara a se folosi de o variabila auxiliara,
ci doar de operatii bit wise*/
#include<stdio.h>
#include<stdlib.h>
void bitw(int *m, int*n)
{
	if (m != n)
	{
		*m ^= *n;
		*n ^= *m;
		*m ^= *n;
	}
}
int main()
{
	int a, b;
	printf("inverstati numerele:");
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	bitw(&a, &b);
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}