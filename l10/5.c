#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void cit(int a[][100], int *n)
{
	int i, j;
	printf("Linii:");
	scanf("%d", &n);
	for(i=0;i< n;i++)
		for (j = 0;j < n;j++)
		{
			printf("a[%d][%d]=", i + 1,j+1);
			scanf("%d", &a[i][j]);
		}
}
void afis(int a[][100], int n)
{
	int i, j;
	for (i = 0;i < n;i++)
	{
		for (j = 0;j < n;j++)
			printf("%d\n", a[i][j]);
	printf("\n");
	}
}
void trans(int a[][100], int n)
{
	int i, j;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			printf("%d", a[j][i]);
}
void afis2(int a[][100], int n)
{
	int i, s = 0;
	for (i = 0;i < n;i++)
		s = s + a[i][0] + a[i][n-1];
	printf("suma este:%d", s);
}
void afis3(int a[][100], int n)
{
	int i, j;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			if (i > j)printf("%d", a[i][j]);
}
void adun(int a[][100], int n)
{
	int i, j,x;
	printf("dati nr:");
	scanf("%d", &x);
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			if (a[i][j] % 3 == 0)a[i][j] += x;
	afis(a, n);
}
void salv(int a[][100], int n)
{
	char x[25];
	FILE *f = fopen(x, "w+t");
	int i, j;
	for (i = 0;i < n;i++)
		for (j = 0;j < n;j++)
			if (a[i][j] >= 65 && a[i][j] <= 97)
				fprintf(f, "%d ", a[i][j]);
	fclose(f);
}
int main()
{
	int a[100][100],n;
	enum{iesire,t,b,c,d,e,f,g,h}opt;
	do {
		printf("0 Iesire\n");
		printf("1 Citire matrice\n" 
			"2 Afișarea matrice\n"
			"3. Afișarea matricei transpuse\n"
			"4. Afișarea sumei elementelor matricei de pe marginile din stanga și din dreapta\n"
			"5. Afișarea elementelor matricei de deasupra diagonalei principale\n"
			"6. Să se adune la fiecare element al matricei divizibil cu 3 un număr citit de la"
			"tastatură, apoi sa se afișeze matricea.\n"
			"7. Să se înmultească fiecare element prim din matrice cu un număr citit de la tastatură\n"
			"8. Să se salveze într-un fișier text cu numele elemente-caracter.txt toate\n");
		printf("Optiunea dmnv este");
		scanf("%d", &opt);
		printf("\n");
		switch (opt)
		{
		case iesire:exit(0);
			break;
		case t:cit(a, &n);
			break;
		case b:afis(a, n);
			break;
		case c:trans(a, n);
			break;
		case d:afis2(a, n);
			break;
		case e:afis3(a, n);
			break;
		case f:afis(a, n);
			break;
		case g:adun(a, n);
			break;
		case h:salv(a, n);
			break;
		default:printf("optiune gresita");
			break;
		}
		printf("\n");
	} while (1);
	system("pause");
	return 0;
}