//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct pc
//{
//	char monitor[20], serie_pc[20], tip_pr[20];
//	int memo, hdd;
//}S;
//void adaug(S *a, int *n)
//{
//	(*n)++;
//	printf("Seria pc: ");
//	scanf("%s", (a + *n)->serie_pc);
//	printf("Monitor pc: ");
//	scanf("%s", (a + *n)->monitor);
//	printf("Tip pc: ");
//	scanf("%s", (a + *n)->tip_pr);
//	printf("Memorie pc: ");
//	scanf("%d", &(a + *n)->memo);
//	printf("Hdd pc: ");
//	scanf("%d", &(a + *n)->hdd);
//}
//void afis(S *a, int n)
//{
//	int i;
//	for (i = 0;i <= n;i++)
//		printf("Seria pc: %s Monitor pc: %s Tip pc: %s , Memorie pc: %d Hdd pc: %d\n", (a + i)->serie_pc, (a + i)->monitor, (a + i)->tip_pr, (a + i)->memo, (a + i)->hdd);
//}
//void afisi(S *a, int i)
//{
//		printf("Seria pc: %s Monitor pc: %s Tip pc: %s , Memorie pc: %d Hdd pc: %d\n", (a + i)->serie_pc, (a + i)->monitor, (a + i)->tip_pr, (a + i)->memo, (a + i)->hdd);
//}
//void salv(S *a, int n)
//{
//	FILE *f;
//	int i;
//	f = fopen("tema82.txt", "wt");
//	for(i=0;i<=n;i++)
//		fprintf(f,"Seria pc: %s Monitor pc: %s Tip pc: %s , Memorie pc: %d Hdd pc: %d\n", (a + i)->serie_pc, (a + i)->monitor, (a + i)->tip_pr, (a + i)->memo, (a + i)->hdd);
//	fclose(f);
//}
//void afisf(S *a,int n)
//{
//	FILE *f;
//	char c;
//	f = fopen("tema82.txt", "rt");
//	while (!feof(f))
//	{
//		fscanf(f, "%c", &c);
//		printf("%c", c);
//	}
//	fclose(f);
//}
//void afispro(S *a, int n)
//{
//	int i;
//	char c[25];
//	printf("\nDati procesorul");
//	scanf("%s", c);
//	for (i = 0;i <= n;i++)
//		if(strcmp(c,(a+i)->tip_pr)==0)
//			afisi(a, i);
//}
//void cautserie(S *a, int n)
//{
//	int i;
//	char c[25];
//	printf("\nDati serie");
//	scanf("%s", c);
//	for (i = 0;i <= n;i++)
//		if (strcmp(c, (a + i)->serie_pc) == 0)
//		afisi(a, i);
//}
//void stergserie(S *a, int *n)
//{
//	int i, j, k=0;
//	char c[25];
//	printf("\nDati serie");
//	scanf("%s", c);
//	for (i = 0;i <= (*n - k);i++)
//	{
//		if (strcmp(c, (a + i)->serie_pc) == 0)
//		{
//			k++;
//			for (j = i;j <= (*n - k);j++)
//				*(a + j) = *(a + j + 1);
//		}
//		i--;
//	}
//	(*n) -= k;
//}
//int cond(const void *a, const void *b)
//{
//	S *ia = (S*)a;
//	S *ib = (S*)b;
//	return strcmp(ia->monitor,ib->monitor);
//}
//int main()
//{
//	S a[25];
//	int n = -1;
//	enum{iesire,adaugare,afisarea,salvaref,afisarepro,afisaref,cautareserie_pc,stergeserie,stergerehddsimemo,sortaremonitor}opt;
//	do 
//	{
//		printf("0 Iesire\n");
//		printf("1. Adaugarea unui calculator\n");
//		printf("2. Afisarea calculatoarelor.\n");
//		printf("3. Salvarea calculatoarelor intr-un fisier\n");
//		printf("4. Afisarea calculatoarelor cu un anumit procesor.\n");
//		printf("5. Afisarea calculatoarelor dintr-un fisier\n");
//		printf("6. Cautarea unui calculator dupa serie_calculator.\n");
//		printf("7. Stergerea unui calculator dupa serie\n");
//		printf("8. Stergerea calculatorelor dupa hdd si memorie.\n");
//		printf("9. Sortarea calculatorelor dupa monitor.\n");
//		printf("Alegere dmnv este:");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case adaugare:adaug(a, &n);
//			break;
//		case afisarea:afis(a, n);
//			break;
//		case salvaref:salv(a, n);
//			break;
//		case afisarepro:afispro(a, n);
//			break;
//		case afisaref:afisf(a, n);
//			break;
//		case cautareserie_pc:cautserie(a, n);
//			break;
//		case stergeserie:stergserie(a, n);
//			break;
//		case stergerehddsimemo:
//			break;
//		case sortaremonitor:qsort(a, n + 1, sizeof(S), cond);
//			break;
//		default:printf("optiune gresita");
//			break;
//		}
//	printf("\n");
//	} while (1);
//	system("pause");
//	return 0;
//}