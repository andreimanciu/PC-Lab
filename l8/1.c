//#include <stdio.h>
//#include <stdlib.h>
//typedef struct biblio {
//	char titlu[20], autor[20], domeniu[20];
//	int an, nrpag;
//}S;
//void adaug(S *a, int *n)
//{
//	(*n)++;
//	printf("Titlu: ");
//	scanf("%s", (a + *n)->titlu);
//	printf("Autor: ");
//	scanf("%s", (a + *n)->autor);
//	printf("Domeniu: ");
//	scanf("%s", (a + *n)->domeniu);
//	printf("An: ");
//	scanf("%d", &(a + *n)->an);
//	printf("Nr de pag: ");
//	scanf("%d", &(a + *n)->nrpag);
//}
//void afis(S *a, int i)
//{
//		printf("Titlu: %s Autor: %s Domeniu: %s , An: %d Nrpag: %d", (a + i)->titlu, (a + i)->autor, (a + i)->domeniu,(a + i)->an,(a + i)->nrpag);
//}
//void salv(S *a, int n)
//{
//	int i;
//	FILE *f;
//	f = fopen("tema8.txt", "wt");
//	for (i = 0;i <= n;i++)
//		fprintf(f,"Titlu: %s Autor: %s Domeniu: %s , An: %d Nrpag: %d\n", (a + i)->titlu, (a + i)->autor, (a + i)->domeniu, (a + i)->an, (a + i)->nrpag);
//	fclose(f);
//}
//void afisd(S *a, int n)
//{
//	int i;
//	char b[20];
//	printf("introduceti domeniu");
//	scanf("%s", b);
//	for (i = 0;i <= n;i++)
//		if (strcmp((a + i)->domeniu, b) == 0)
//			afis(a, i);
//}
//void afisf()
//{
//	char c;
//	FILE *f;
//	f = fopen("tema8.txt", "rt");
//	while (!feof(f))
//	{
//		fscanf(f, "%c", &c);
//		printf("%c", c);
//	}
//	fclose(f);
//}
//void caut(S *a, int n)
//{
//	int i;
//	char t[25];
//	printf("Titlu cautat este");
//	scanf("%s", t);
//	for (i = 0;i <= n;i++)
//		if (strcmp((a + i)->titlu, t) == 0)
//			afis(a, i);
//}
//void sterg(S *a, int *n)
//{
//	int i, j, k=0;
//	char t[25];
//	printf("Titlu cautat este");
//	scanf("%s", t);
//	for (i = 0;i <= (*n - k);i++)
//	{
//		if (strcmp((a + i)->titlu, t) == 0)
//		{
//			k++;
//			for (j = i;j <= (*n - k);j++)
//				*(a + j) = *(a + j + 1);
//			i--;
//		}
//	}
//*n -= k;
//}
//int sort(const void *a, const void *b)
//{
//	S *ia = (S*)a;
//	S *ib = (S*)b;
//	return strcmp(ia->titlu, ib->titlu);
//}
//int main()
//{
//	S a[25];
//	int n=-1;
//	enum{iesire,adaugare,salvaref,afisared,afisaref,cautaret,stergere,sortaret}opt;
//	do {
//		printf("0. Iesire\n");
//		printf("1. Adaugarea unei carti\n");
//		printf("2. Salvarea cartilor intr-un fisier\n");
//		printf("3. Afisarea cartilor dintr-un domeniu citit de la tastatura\n");
//		printf("4. Afisarea cartilor dintr-un fisier\n");
//		printf("5. Cautarea unei carti dupa titlu\n");
//		printf("6. Stergerea unei carti\n");
//		printf("7. Sortarea cartilor dupa titlu\n");
//		printf("Optiune este:");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case adaugare:adaug(a, &n);
//			break;
//		case salvaref:salv(a, n);
//			break;
//		case afisared:afisd(a, n);
//			break;
//		case afisaref:afisf();
//			break;
//		case cautaret:caut(a, n);
//			break;
//		case stergere:sterg(a, n);
//			break;
//		case sortaret:qsort(a, n + 1, sizeof(S), sort);
//			break;
//		default:printf("Optiune gresita");
//			break;
//		}
//		printf("\n");
//	} while (1);
//	system("pause");
//	return 0;
//}