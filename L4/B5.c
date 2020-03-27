#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *x, *v, i, *diferenta = 0, *retine_valoareaincrem, *retine_valoareadecrem;
	x = (int*)malloc(sizeof(int));
	diferenta = (int*)malloc(sizeof(int));
	retine_valoareaincrem= (int*)malloc(sizeof(int));
	retine_valoareadecrem= (int*)malloc(sizeof(int));
	v = (int*)malloc(sizeof(int));
	printf("x=");
	scanf("%d", x);
	(*x)++;
	*retine_valoareaincrem = *x;
	printf("incrementarea lui x=%d\n", *retine_valoareaincrem);
	*x = (*x) - 2;
	*retine_valoareadecrem = *x;
	printf("decrementarea lui x=%d\n", *retine_valoareadecrem);
	*diferenta = (*retine_valoareaincrem) - (*retine_valoareadecrem);
	printf("diferenta dintre incrementarea si decrementarea valorii pointerului este:%d", *diferenta);
	system("pause");
	return 0;
 }
{
	int n, *x, *v, i, *diferenta = 0, *retine_valoareaincrem, *retine_valoareadecrem;
	x = (int*)malloc(sizeof(int));
	diferenta = (int*)malloc(sizeof(int));
	retine_valoareaincrem = (int*)malloc(sizeof(int));
	retine_valoareadecrem = (int*)malloc(sizeof(int));
	v = (int*)malloc(sizeof(int));
	printf("n este: ");
	scanf("&d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]", i + 1);
		scanf("&d", &v[i]);
	}
	for (i = 0; i < n; i++)
	{
		*x = *v;
		(*x)++;
		*retine_valoareaincrem = *x;
		printf("incrementarea lui x=%d\n", *retine_valoareaincrem);
		*x = (*x) - 2;
		*retine_valoareadecrem = *x;
		printf("decrementarea lui x=%d\n", *retine_valoareadecrem);
		*diferenta = (*retine_valoareaincrem) - (*retine_valoareadecrem);
		printf("diferenta dintre incrementarea si decrementarea valorii pointerului este:%d", *diferenta);
	}
		system("pause");
		return 0;


		
	
}