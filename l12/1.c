#include <stdlib.h>
#include <stdio.h>
#include<string.h>
#define cit(a) scanf("%d",&a)
typedef struct imprimanta
{
	char model[20];
	int pret;
	struct imprimanta *urm;
}nod;
nod* adaug(nod *prim)
{
	nod *q=(nod*)malloc(sizeof(nod));
	int i;
	printf("modelul:");
	scanf("%s", q->model);
	q->pret = 0;
	for (i = 0;i < strlen(q->model);i++)
		q->pret += q->model[i];
	q->urm = NULL;
	if (q == NULL)
		printf("nu s a putu initializa");
	else
	{
		q->urm = prim;
		return q;
	}
}
void afis(nod *prim)
{
	nod *q=prim;
	while (q != NULL)
	{
		printf("Model:%s Pret:%d\n", q->model, q->pret);
		q = q->urm;
	}
}
nod* sterg(nod *prim)
{
	FILE *f = fopen("imprimante.txt", "wt");
	nod *q;
	q = prim->urm;
	while (q != NULL)
	{
		fprintf(f, "Model:%s Pret:%d\n", q->model, q->pret);
		q = q->urm;
	}
	q = prim;
	prim = prim->urm;
	free(q);
	fclose(f);
	return prim;
}
int main()
{
	nod *prim = NULL;
	enum{iesire,adaugare,afisare,stergere}opt;
	do {
		printf("0 iesire\n");
		printf("1 Adaugare\n");
		printf("2 Afisare\n");
		printf("3 Stergere\n");
		printf("Optiunea dmv este ");
		cit(opt);
		switch (opt)
		{
		case iesire:exit(0);
			break;
		case adaugare:prim=adaug(prim);
			break;
		case afisare:afis(prim);
			break;
		case stergere:prim = sterg(prim);
			break;
		default:
			break;
		}
	} while (1);
	printf("plm");
	system("pause");
	return 0;
}