/*ex2. Sa se scrie un program care insumeaza elementele intr - o metoda
separate de metoda main, folosind transmiterea prin referinta.*/

#include <stdlib.h>
#include<stdio.h>

void suma(int *a, int *b)
{
	int s = 0;
	s = *a + *b;
	printf("%d", s);

}

int main()
{
	int x, y;
	printf("x="); scanf("%d", &x);
	printf("y="); scanf("%d", &y);
	printf("Suma nr este:");
	suma(&x, &y);
	system("pause");
	return 0;
}