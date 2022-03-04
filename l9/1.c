//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct utilaje
//{
//	char denumire[20],sector[20];
//	int an;
//	struct utilaje *urm;
//}nod;
//nod *adaug(nod *prim)
//{
//	nod *p = (nod*)malloc(sizeof(nod));
//	nod *q;
//	printf("Denumire:");
//	scanf("%s", p->denumire);
//	printf("Sector:");
//	scanf("%s", p->sector);
//	printf("An:");
//	scanf("%d", &p->an);
//	p->urm = NULL;
//	if (p == NULL)
//	{
//		printf("Eroare");
//		exit(0);
//	}
//	if (prim == NULL)
//		return p;
//	else
//	{
//		for (q = prim;q->urm != NULL;q = q->urm);
//		q->urm = p;
//		return prim;
//
//	}
//}
//void afis(nod *prim)
//{
//	nod *q;
//	q = prim;
//	while (q != NULL)
//	{
//		printf("Denumire:%s ,Sector:%s ,An:%d\n", q->denumire, q->sector, q->an);
//		q=q->urm;
//	}
//}
//void afisan(nod *prim)
//{
//	nod *q;
//	int anus;
//	printf("an:");
//	scanf("%d", &anus);
//	q = prim;
//	while (q != NULL)
//	{
//		if(q->an<anus)printf("Denumire:%s ,Sector:%s ,An:%d\n", q->denumire, q->sector, q->an);
//		q = q->urm;
//	}
//}
//void tran(nod *prim)
//{
//	nod *q;
//	q = prim;
//	while (q != NULL)
//	{
//		if (q->denumire[0] >= 'a' && q->denumire[0] <= 'z')q->denumire[0]= toupper(q->denumire[0]);
//		q = q->urm;
//	}
//}
//void saf(nod *prim)
//{
//	FILE *f = fopen("utilaje.txt", "wt");
//	char s[20];
//	printf("dati s");
//	scanf("%s", s);
//	nod *q;
//	q = prim;
//	while (q != NULL)
//	{
//		if(strcmp(s,q->sector)==0)fprintf(f,"Denumire:%s ,Sector:%s ,An:%d\n", q->denumire, q->sector, q->an);
//		q = q->urm;
//	}
//	fclose(f);
//}
////void sterg(nod *prim)
////{
////	int i, j, k=0;
////	char de[20];
////	printf("dati denumire");
////	scanf("%s", de);
////	nod *q,*t;
////	q = prim;
////	while (q != NULL)
////	{
////		if (strcmp(q->denumire, de) == 0)
////		{
////			k++;
////			t = q;
////			while (t != NULL)
////		}
////	}
////}
//int main()
//{
//	nod *prim = NULL;
//	enum{iesire,citire,afisare,afisarean,transf,salvf,stergeredenumire}opt;
//	do {
//		printf("0 Iesire\n");
//		printf("1.Introducerea unui utilaj nou\n");
//		printf("2 Afişarea utilajelor din depozit.\n");
//		printf("3 Afisarea utilajelor din deposit care au anul fabicatiei mai mic decât un an dat de utilizator de la tastatura.\n");
//		printf("4.Transformarea primei litere din denumirea utilajelor in litera mare daca aceasta este litera mica.\n");
//		printf("5.Salvarea tuturor utilajelor dintr-un anumit sector precizat de utilizator intr-un fisiere text cu numele utilaj_sector.txt.\n");
//		printf("6.Stergerea unui utilaj dupa denumire\n");
//		printf("Alegerea opt");
//		scanf("%d", &opt);
//		printf("\n");
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case citire:prim = adaug(prim);
//			break;
//		case afisare:afis(prim);
//			break;
//		case afisarean:afisan(prim);
//			break;
//		case transf:tran(prim);
//			break;
//		case salvf:saf(prim);
//			break;
//		case stergeredenumire:
//			break;
//		default:printf("Optiunea gresita\n");
//			break;
//		}
//		printf("\n");
//	} while (1);
//}