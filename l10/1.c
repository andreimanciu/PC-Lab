//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define ci(a) scanf("%d",&a)
//typedef struct pacienti
//{
//	char nume[20], prenume[20];
//	int varsta, greutate, h, hipertensiune;
//}P;
//void adaug(P *a, int *n)
//{
//	(*n)++;
//	printf("Numele:");
//	scanf("%s", (a + *n)->nume);
//	printf("Prenumele:");
//	scanf("%s", (a + *n)->prenume);
//	printf("Varsta:");
//	ci((a + *n)->varsta);
//	printf("Greutate:");
//	ci((a + *n)->greutate);
//	printf("Inaltimea:");
//	ci((a + *n)->h);
//	printf("Introduceti 1 pt hipertensiune si 0 daca nu are");
//	ci((a + *n)->hipertensiune);
//}
//void afis(P *a, int n)
//{
//	int i;
//	for (i = 0;i <= n;i++)
//	{
//		printf("Numele:%s Prenumele:%s , Varsta:%d Greutate:%d Inaltime:%d ,",(a+i)->nume, (a + i)->prenume, (a + i)->varsta, (a + i)->greutate, (a + i)->h);
//		if ((a + i)->hipertensiune == 1)
//			printf("Hipertensiune:Pozitiv\n");
//		else 
//			printf("Hipertensiune:Negativ\n");
//	}
//}
//void salv(P *a, int n)
//{
//	FILE *f = fopen("pacienti.txt", "wt");
//	int i;
//	for (i = 0;i <= n;i++)
//		if ((a + i)->varsta > 60)
//		{
//			fprintf(f, "Numele:%s Prenumele:%s , Varsta:%d Greutate:%d Inaltime:%d ,", (a + i)->nume, (a + i)->prenume, (a + i)->varsta, (a + i)->greutate, (a + i)->h);
//			if ((a + i)->hipertensiune == 1)
//				fprintf(f, "Hipertensiune:Pozitiv\n");
//			else
//				fprintf(f, "Hipertensiune:Negativ\n");
//			fclose(f);
//		}
//}
//int condpren(const void *a, const void *b)
//{
//	P *ia = (P*)a;
//	P *ib = (P*)b;
//	return strcmp(ia->prenume, ib->prenume);
//}
//void afishipertensiune(P *a, int n)
//{
//	int i;
//	for (i = 0;i <= n;i++)
//	if((a+i)->hipertensiune==1)
//	{
//		printf("Numele:%s Prenumele:%s , Varsta:%d Greutate:%d Inaltime:%d ,", (a + i)->nume, (a + i)->prenume, (a + i)->varsta, (a + i)->greutate, (a + i)->h);
//			printf("Hipertensiune:Pozitiv\n");
//	}
//}
////void buble(P *a, int *n)
////{
////	int i, k;
////	P aux;
////	do {
////		k = 1;
////		for(i=0;i<*n;i++)
////			if ((a + i)->varsta < (a + i + 1)->varsta)
////			{
////				*(a + i) = aux;
////				aux = *(a + i + 1);
////				*(a + i + 1) = *(a + i);
////				k = 0;
////			}
////	} while (!k);
////}
//void afis30v(P *a, int n)
//{
//	int i;
//	for (i = 0;i <= n;i++)
//		if ((a + i)->varsta < 30)
//		{
//			printf( "Numele:%s Prenumele:%s , Varsta:%d Greutate:%d Inaltime:%d ,", (a + i)->nume, (a + i)->prenume, (a + i)->varsta, (a + i)->greutate, (a + i)->h);
//			if ((a + i)->hipertensiune == 1)
//				printf( "Hipertensiune:Pozitiv\n");
//			else
//				printf( "Hipertensiune:Negativ\n");
//			
//		}
//}
//void adun505(P *a, int n)
//{
//	int i;
//	for (i = 0;i <= n;i++)
//		if ((a + i)->varsta > 50)
//			(a + i)->greutate += 5;
//}
//void put2v(P *a, int n)
//{
//	int i, j, k;
//	for (i = 0;i <= n;i++)
//	{
//		k = 0;
//		for (j = 31;j >= 0;j--)
//			if ((a + i)->varsta >> j & 1)k++;
//		if (k == 1)
//		{
//			printf("Numele:%s Prenumele:%s , Varsta:%d Greutate:%d Inaltime:%d ,", (a + i)->nume, (a + i)->prenume, (a + i)->varsta, (a + i)->greutate, (a + i)->h);
//			if ((a + i)->hipertensiune == 1)
//				printf("Hipertensiune:Pozitiv\n");
//			else
//				printf("Hipertensiune:Negativ\n");
//		}
//	}
//}
//void sterg110(P *a, int *n)
//{
//	int i, j, k=0;
//	for(i=0;i<=(*n-k);i++)
//		if ((a + i)->varsta > 110)
//		{
//			k++;
//			for (j = i;j < (*n - k);j++)
//				*(a + j) = *(a + j + 1);
//			i--;
//		}
//	*n -= k;
//}
//int main()
//{
//	P *a[25];
//	int n = -1;
//	enum { iesire, adaugare, afisare, salvv60f, qsortpre, afisarehipertensiune, bublesortv, afisare30v, adunare505, putere2v, stergere110, SIF1,CDF1}opt;
//	do 
//	{
//		printf("0 Iesire\n");
//		printf("1.Adaugarea informatiilor despre pacient: nume, prenume, varsta, greutate, înaltime,   hipertensiune   (1/0,   daca   se   introduce   1   atunci   pacientul   are hipertensiune, iar daca se introduce 0 acesta nu are hipertensiune.).\n");
//		printf("2.Afisarea tuturor pacientilor pe ecran.\n");
//		printf("3.Salvarea pacientilor cu varsta mai mare de 60 de ani intr-un fisier text cu numele pacien.txt.\n");
//		printf("4.Afisarea alfabetica dupa prenume a pacientilor (qsort).\n");
//		printf("5.Afisarea tuturor pacientilor care au hipertensiune.\n");
//		printf("6.Afisarea în ordine descrescatoare dupa varsta a pacientilor (bubble sort).\n");
//		printf("7.Afisarea numarului de pacienti cu varsta mai mica de 30 de ani\n");
//		printf("8.Sa se adune la toti pacientii care au varsta mai mare decat 50, 5 kilograme la greutatea acestora.\n");
//		printf("9.Sa se afiseze toti pacientii care au varsta egala cu o putere a lui 2.\n");
//		printf("10.Sa se stearga toti pacientii care au varsta mai mare de 110 de ani.\n");
//		printf("Alegerea dmnv este:");
//		ci(opt);
//		printf("\n");
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case adaugare:adaug(a, &n);
//			break;
//		case afisare:afis(a, n);
//			break;
//		case salvv60f:salv(a, n);
//			break;
//		case qsortpre:qsort(a, n + 1, sizeof(P), condpren);
//			afis(a, n);
//			break;
//		case afisarehipertensiune:afishipertensiune(a, n);
//			break;
//		case bublesortv:/*buble(a, &n);*/
//			break;
//		case afisare30v:afis30v(a, n);
//			break;
//		case adunare505:adun505(a, n);
//			break;
//		case putere2v:put2v(a, n);
//			break;
//		case stergere110:sterg110(a, &n);
//			break;
//		case SIF1:
//			break;
//		case CDF1:
//			break;
//		default:printf("optiune gresita\n");
//			break;
//		}
//		printf("\n");
//	} while (1);
//	system("pause");
//	return 0;
//}