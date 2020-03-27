#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int n, i, a[50];
	printf("numaru de elemente : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (((a[i] << 31) | 0) == 0)
			printf("%d este par\n", a[i]);
		else
			printf("%d este impar\n", a[i]);
	}
	system("pause");
	return 0;

}