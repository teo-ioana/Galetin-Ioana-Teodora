/*ex.2. Se citeste de la tastatura un numar C cu valori posibile
intre 0 - 7. Dupa citirea numarului "C" se vor citi de la tastatura
"N" numere iar acele numere care au reprezentarea lor
binara, bitul de pe pozitia "C" cu valoare 1, vor fi introduse
intr - o stiva.Sa se afiseze in final tot continutul stivei
(indiferent de ordine)
Ex:
C = 2
N = 5
- Acum se citesc 5 numere :
	1 2 3 4 5
- Se afiseaza la sfarsit
	4 5
	Deoarece 4 = 100 si 5 = 101, bitul de pe pozitia "2" este "1"*/

#include <stdio.h>
#include <stdlib.h>
#define CAPACITATE 25

int s[CAPACITATE], top = -1;

void push(int nr)
{
	if (top == CAPACITATE - 1)
	{
		printf("Stiva este plina!\n");
	}
	else
	{
		s[++top] = nr;
	}
}

int transformareBinar(int C, int N)
{
	int nr;
	for (int i = 0; i < N; i++)
	{
		printf("nr= ");
		scanf("%d", &nr);
		if ((nr >> C) & 1 == 1)
			push(nr);
	}
}

void afisareStiva()
{
	int i = top;
	while (i != -1)
	{
		printf("%d\n", s[i]);
		i--;
	}
}
int main()
{
	int C, N;
	printf("C = ");
	scanf("%d", &C);
	printf("N = ");
	scanf("%d", &N);
	transformareBinar(C, N);
	printf("\n\n");
	afisareStiva();
	system("pause");
	return 0;
}