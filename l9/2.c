//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//typedef struct pc
//{
//	char serie[25], monitor[25];
//	int memorie;
//	struct pc *urm;
//}nod;
//nod *adaug(nod *prim,int *n)
//{
//	nod *p = (nod*)malloc(sizeof(nod));
//	nod *q;
//	if (p == NULL)
//	{
//		printf("nu s a putut aloca");
//		exit(0);
//	}
//	printf("Serie:");
//	scanf("%s", p->serie);
//	printf("Monitor:");
//	scanf("%s", p->monitor);
//	printf("Memorie:");
//	scanf("%d",&(p->memorie));
//	p->urm = NULL;
//	if (prim == NULL)
//	{
//		return p;n++;
//	}
//	else
//		if (strcmp(prim->serie, p->serie) > 0)
//		{
//			p->urm = prim;
//			return p;
//			n++;
//		}
//	else
//
//	{
//		for (q = prim;q->urm != NULL && strcmp(q->serie, p->serie)<0; q = q->urm);
//		q->urm = p;
//		return prim;
//		n++;
//	}
//}
//void afisare(nod *prim)
//{
//	nod *q=prim;
//	while (q != NULL)
//	{
//		printf("Serie:%s Monitor:%s ,Memorie:%d\n", q->serie, q->monitor, q->memorie);
//		q = q->urm;
//	}
//}
//void salvf(nod *prim)
//{
//	FILE *f = fopen("fucccc.txt", "wt");
//	nod *q = prim;
//	while (q != NULL)
//	{
//		fprintf(f,"Serie:%s Monitor:%s ,Memorie:%d\n", q->serie, q->monitor, q->memorie);
//		q = q->urm;
//	}
//	fclose(f);
//}
//void afisprocesor(nod *prim)
//{
//	nod *q = prim;
//	char pro[20];
//	scanf("%s", pro);
//	while (q != NULL)
//	{
//		if(strcmp(pro,q->monitor)==0)
//		printf("Serie:%s Monitor:%s ,Memorie:%d\n", q->serie, q->monitor, q->memorie);
//		q = q->urm;
//	}
//}
//void diag(nod *prim, int*n)
//{
//	int i, j,a[20][20];
//	nod *q = prim;
//	for (i = 0;i < *n;i++)
//	{
//		for (j = 0;j < *n;j++)
//			if (i + j == *n - 1)a[i][j] = q->memorie;
//			else
//				a[i][j] = 0;
//		q = q->urm;
//	}
//	for (i = 0;i < *n;i++) {
//		for (i = 0;i < *n;i++)printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}
//int main()
//{
//	nod *prim = NULL;
//	int *n=0;
//	enum{iesire,adaugare,afisarecm,salvaref,afisareprocesor,cautareserie,stergereserie,diagnoala}opt;
//	do {
//		printf("0. Iesire\n");
//		printf("1. Adaugarea unui calculator\n");
//		printf("2. Afisarea calculatoarelor în ordine crecătoare după serie\n");
//		printf("3. Salvarea calculatoarelor intr-un fisier\n");
//		printf("4. Afisarea calculatoarelor cu un anumit procesor\n");
//		printf("5. Cautarea unui calculator dupa serie_calculator\n");
//		printf("6. Stergerea unui calculator dupa serie.\n");
//		printf("7. Sa se puna pe diagonala secundara a unei matrice memoria calculatoarelor, iar pe restul elementelor 0\n");
//		printf("Optiune dmv:");
//		scanf("%d", &opt);
//		printf("\n");
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case adaugare:prim=adaug(prim,&n);
//			break;
//		case afisarecm:afisare(prim);
//			break;
//		case salvaref:salvf(prim);
//			break;
//		case afisareprocesor:afisprocesor(prim);
//			break;
//		case cautareserie:
//			break;
//		case stergereserie:
//			break;
//		case diagnoala:diag(prim, &n);
//			break;
//		default:printf("Optiune gresita");
//			break;
//		}
//	printf("\n");
//	} while (1);
//}