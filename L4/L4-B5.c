/*5. Sa se realizeze un program care sa prezinte diferenta dintre
urmatoarele, incrementarea / decrementarea valorii pointerului,
precum si incrementarea / decrementarea pointerului care ia
adresa index-ului “0” a unui vector oarecare.*/
#include<string.h>
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int *p, v[] = { 1,2,3,4,5,6,7,8,9,10 };
	p = v;
	printf("p:%d.\n", *p);
	p++;    //incrementarea adresi
	printf("p:%d.\n", *p);
	(*p)++;  //incrementarea valorii
	printf("p:%d.\n", *p);
	(*p)--;  //decrementarea valorii
	printf("p:%d.\n", *p);
	p--;   //decrementarea adresei
	printf("p:%d.\n", *p);
	system("pause");
	return 0;
}