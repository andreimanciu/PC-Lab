//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//typedef struct abonati
//{
//	char nume[20], prenume[20], retea[20];
//	int varsta, nrtel;
//	struct abonati *urm;
//}nod;
//nod* adaug(nod *prim)
//{
//	nod *q,*p = (nod*)malloc(sizeof(nod));
//	if (p == NULL)
//	{
//		printf("eroare");
//		exit(0);
//	}
//		printf("nume:");
//		scanf("%s", p->nume);
//		printf("prenume:");
//		scanf("%s", p->prenume);
//		printf("retea:");
//		scanf("%s", p->retea);
//		printf("varsta:");
//		scanf("%d", &p->varsta);
//		printf("nrtel:");
//		scanf("%d", &p->nrtel);
//		p->urm = NULL;
//		if (prim == NULL)
//			return p;
//		else
//			if (prim->varsta < p->varsta)
//			{
//				p->urm = prim;
//				return p;
//			}
//			else
//
//		{
//			q = prim;
//			while (q->urm != NULL)
//				if (prim->varsta < p->varsta)break;
//					else q = q->urm;
//			q->urm = p;
//			return prim;
//		}
//	
//}
//void afisdv(nod *prim)
//{
//	nod *q=prim;
//	while (q != NULL)
//	{
//		printf("Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d\n", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q=q->urm;
//	}
//
//}
//void afiscond(nod* prim)
//{
//	nod *q = prim;
//	while (q != NULL)
//	{
//		if (q->varsta > 30 && (q->nume[0] == 'a' || q->nume[0] =='A'))
//		printf("Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d\n", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q = q->urm;
//	}
//}
//void salvf(nod* prim)
//{
//	FILE *f = fopen("tema10.txt", "wt");
//	nod *q = prim;
//	char retea[20];
//	printf("retea:");
//	scanf("%s", retea);
//	while (q != NULL)
//	{
//		if (strcmp(retea,q->retea)==0)
//			fprintf(f,"Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d\n", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q = q->urm;
//	}
//	fclose(f);
//}
//void transf(nod* prim)
//{
//	nod *q = prim;
//	while (q != NULL)
//	{
//		q->nume[0] = toupper(q->nume[0]);
//			printf("Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d\n", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q = q->urm;
//	}
//}
//void sterg(nod *prim)
//{
//	nod*q, *p;
//	char nume[20], prenume[20];
//	printf("NUME: ");
//	scanf("%s", nume);
//	printf("PRENUME: ");
//	scanf("%s", prenume);
//	if(prim!=NULL)
//		if (strcmp(prim->nume, nume) == 0 && strcmp(prim->prenume, prenume) == 0)
//		{
//			q = prim;
//			prim = prim->urm;
//			free(q);
//			return prim;
//		}
//	q = prim;
//	while(q->urm!=NULL)
//		if (strcmp(q->urm->nume, nume) == 0 && strcmp(q->urm->prenume, prenume) == 0)
//		{
//			p = q->urm;
//			q->urm = q->urm->urm;
//			free(p);
//			return prim;
//		}
//}
//void sASCI(nod* prim)
//{
//	nod *q = prim;
//	int s,i;
//	while (q != NULL)
//	{
//		s = 0;
//		for (i = 0;i < strlen(q->prenume);i++)s += q->prenume[i];
//			printf("Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q = q->urm;
//	}
//}
//void afisbiti(nod* prim)
//{
//	nod *q = prim;
//	int s, i;
//	while (q != NULL)
//	{
//		if(q->varsta>>1 & 1)
//		printf("Nume: %s Prenume: %s Retea: %s Varsta: %d Nr_tel: %d SUMA: %d\n", q->nume, q->prenume, q->retea, q->varsta, q->nrtel);
//		q = q->urm;
//	}
//}
//int main()
//{
//	nod *prim=NULL;
//	enum{iesire,adaugare,afisaredv,afisarecond,salvaref,tranformarel,stergerenp,diagonala,sumaASCI,afisarebitiv}opt;
//	do {
//		printf("1. Introducerea datelor\n");
//		printf("2. Afisarea in ordine descrescatoare a abonatilor dupa varsta.\n");
//		printf("3. Sa se afiseze toti abonatii care au varsta mai mare decat 30 si numele acestora incepe cu litera a sau A.\n");
//		printf("4. Salvarea intr-un fisier text a abonatilor care fac parte dintr - o retea precizata de utilizator.\n");
//		printf("5. Sa se transforme prima litera a numelui abonatilor in litera mare daca aceasta este litera mica.\n");
//		printf("6. Sa se stearga un abonat precizat prin nume si prenume de catre utilizator.\n");
//		printf("7. Sa se puna pe diagonala secundara a unei matrice varsta fiecarui abonat, iar pe restul 0.\n");
//		printf("8. Sa se afiseze pentru fiecare abonat suma caracterelor ASCII din prenume.\n");//		printf("9. Sa se afiseze toti abonatii care au varsta numar par.\n");
//		printf("0. Iesire\n");
//		printf("Optiune dmv este");
//		scanf("%d", &opt);
//		switch (opt)
//		{
//		case iesire:exit(0);
//			break;
//		case adaugare:prim=adaug(prim);
//			break;
//		case afisaredv:afisdv(prim);
//			break;
//		case afisarecond:afiscond(prim);
//			break;
//		case salvaref:salvf(prim);
//			break;
//		case tranformarel:transf(prim);
//			break;
//		case stergerenp:sterg(prim);
//			break;
//		case diagonala:
//			break;
//		case sumaASCI:sASCI(prim);
//			break;
//		case afisarebitiv:afisbiti(prim);
//			break;
//		default:printf("optiune gresita\n");
//			break;
//		}
//		printf("\n");
//	} while (1);
//	system("pause");
//	return 0;
//}