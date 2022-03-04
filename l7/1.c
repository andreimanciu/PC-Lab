#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct angajati {
	char nume[20], prenume[20],functia[20];
	int salariu, varsta,vechime;
}S;
void adaug(S *a, int *n)
{
	(*n)++;
	printf("Numele:");
	scanf("%s", (a + *n)->nume);
	printf("Prenumele:");
	scanf("%s", (a + *n)->prenume);
	printf("Salariu:");
	scanf("%d", &(a + *n)->salariu);
	printf("Varsta:");
	scanf("%d", &(a + *n)->varsta);
	if ((a + *n)->salariu > 3000)
	{
		printf("Functia:");
		scanf("%s", (a + *n)->functia);
	}
	else
	{
		printf("Vechime:");
		scanf("%d", &(a + *n)->vechime);
	}
}
void afis(S *a, int n)
{
	int i;
	for (i = 0;i <= n;i++)
	{
		printf("Nume: %s Prenume: %s Salariu: %d, Varsta: %d", (a + i)->nume, (a + i)->prenume, (a + i)->salariu, (a + i)->varsta);
		if ((a + i)->salariu > 3000)
			printf("Functia: %s\n", (a + i)->functia);
		else
			printf("Vechime: %d\n", (a + i)->vechime);
	}
}
void afis2(S *a, int i)
{
		printf("Nume: %s Prenume: %s Salariu: %d, Varsta: %d", (a + i)->nume, (a + i)->prenume, (a + i)->salariu, (a + i)->varsta);
		if ((a + i)->salariu > 3000)
			printf("Functia: %s\n", (a + i)->functia);
		else
			printf("Vechime: %d\n", (a + i)->vechime);
}
void afisnp(S *a, int n)
{
	int i;
	char nu[20], pre[20];
	printf("introduceti numele cautat");
	scanf("%s", nu);
	printf("introduceti prenumele cautat");
	scanf("%s", pre);
	for (i = 0;i <= n;i++)
		if(strcmp(nu,(a+i)->nume)==0 && strcmp(pre, (a + i)->prenume) == 0)
		{
		printf("Nume: %s Prenume: %s Salariu: %d, Varsta: %d", (a + i)->nume, (a + i)->prenume, (a + i)->salariu, (a + i)->varsta);
		if ((a + i)->salariu > 3000)
			printf("Functia: %s\n", (a + i)->functia);
		else
			printf("Vechime: %d\n", (a + i)->vechime);
		}
}
void afisv(S *a, int n)
{
	int i,ani;
	printf("Introduceti varsta: ");
	scanf("%d", &ani);
	for (i = 0;i <= n;i++)
		if (ani<(a + i)->varsta)
		{
			printf("Nume: %s Prenume: %s Salariu: %d, Varsta: %d ", (a + i)->nume, (a + i)->prenume, (a + i)->salariu, (a + i)->varsta);
			if ((a + i)->salariu > 3000)
				printf("Functia: %s\n", (a + i)->functia);
			else
				printf("Vechime: %d\n", (a + i)->vechime);
		}
}
void transf(S *a, int n)
{
	int i,j;
	for (i = 0;i <= n;i++)
		if (strchr("aeiouAEIOU", (a + i)->prenume[0]))
			for (j = 0;j <strlen((a + i)->prenume);j++)
				(a + i)->prenume[j] = toupper((a + i)->prenume[j]);
	
	afis(a, n);
}
void pute(S *a, int n)
{
	int i, j, k;
	for (i = 0;i <= n;i++)
	{
		k = 0;
		for (j = 31;j >= 0;j--)
			if ((a + i)->salariu >> j & 1)k++;
		if (k == 1)afis2(a, i);
	}
}
int sort(const void *a, const void *b)
{
	S *ia = (S *)a;
	S *ib = (S *)b;
	return (int)(ib->salariu - ia->salariu);
}
int sort2(const void *a, const void *b)
{
	S *ia = (S *)a;
	S *ib = (S *)b;
	return strcmp(ia->prenume,ib->prenume);
}
void sterg(S *a, int *n)
{
	int i, k=0, j;
	for(i=0;i<=(*n-k);i++)
		if ((a + i)->varsta > 65)
		{
			k++;
			for (j = i;j <= (*n - k);j++)
				*(a + j) = *(a + j + 1);
			i--;
		}
(*n)-=k;
}
int main()
{
	S a[25];
	int n = -1;
	enum{iesire,adaugare,afisare,afisarenp,afisarev,transformarev,putere,sortareds,sortareap,stergere=10}opt;
	do {
		printf("0. Iesire.\n");
		printf("1. Adaugarea unui nou angajat in firma.\n");
		printf("2. Afisarea angajatilor din firma.\n");
		printf("3. Afisarea angajatului cautat dupa nume si prenume.\n");
		printf("4. Afisarea angajatilor care au varsta mai mare decat o varsta precizata de utilizator de la tastatura\n");
		printf("5. Sa se transforme toate prenumele angajatilor in litere mari daca prenumele incepe cu o vocala.\n");
		printf("6. Sa se afiseze angajatii care au salariul egal cu o putere a lui 2.\n");
		printf("7. Afisarea angajatilor din firma in ordine descrescatoare dupa salar folosind functia qsort.\n");
		printf("8. Afisarea angajatilor din firma in ordine alfabetica dupa prenume folosind functia qsort.\n");
		printf("10. Stergerea tuturor angajatilor care au varsta mai mare de 65 de ani.\n");
		printf("Alegerea dmnv este:");
		scanf("%d", &opt);
		printf("\n");
		switch (opt)
		{
		case iesire:exit(0);
			break;
		case adaugare:adaug(a, &n);
			break;
		case afisare:afis(a, n);
			break;
		case afisarenp:afisnp(a, n);
			break;
		case afisarev:afisv(a, n);
			break;
		case transformarev:transf(a, n);
			break;
		case putere:pute(a, n);
			break;
		case sortareds:qsort(a, n + 1, sizeof(S), sort);
			afis(a, n);
			break;
		case sortareap:qsort(a, n + 1, sizeof(S), sort2);
			afis(a, n);
			break;
		case stergere:sterg(a, n);
			break;
		default:printf("Optiune gresita");
			break;
		}
		printf("\n");
	} while (1);
	system("pause");
	return 0;
}