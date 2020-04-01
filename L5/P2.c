#include <stdio.h>
#include <stdlib.h>
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
int main()
{
	unsigned int C, N, contor = 1, numar, i, k = 0, ok, v[100];
	printf("C="); scanf("%d", &C);
	printf("N="); scanf("%d", &N);
	while (contor <= N)
	{
		printf("numar="); scanf("%d", &numar);
		ok = 0;
		if (numar&(1 << C))
			ok = 1; // numarul respecta conditia
		if (ok == 1)
		{
			v[k] = numar;
			k++;
		}
		contor++;
	}
	for (i = 0; i < k; i++)
		printf("%d ", v[i]);

	return 0;
	system("pause");

}
