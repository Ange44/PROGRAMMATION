#include<stdio.h>

int main()
{
    /* Declaration des variables */
    int n,i,f;

    /* Les entrées */
    printf("***BIENVENUE DANS NOTRE LOGICIEL DE CALCUL DU FACTORIELLE***\n\n\n\n");
    printf("Veillez entrer un nombre svp\n");

    scanf("%d",&f);
    printf(" VEILLEZ PATIENTER SVP PROGRAMME EN COURS DE TRAITEMENT.......\n");


    if(f==0)
    {
        f=1
          printf("f");
    }

    else if(f<0)
    {
        printf("error");
    }
    else
    {
        f=1;
        for (i=2; i<=n; i++)
        {
            f=f*i;
        }
        {

            /* Sortie */

            printf("la factorielle est:  %d",f);

        }
