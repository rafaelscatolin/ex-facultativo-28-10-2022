

#include <stdio.h>
#define MAX 05

void bubble_sort(int *a){
    int i, j, k, tmp;
    for(i = 0; i < MAX; i++)
        for(j = i+1; j < MAX; j++)
            if(a[j] < a[i])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;

                for(k = 0; k < MAX; k++)
                {
                    printf(" %d ", a[k]);
                    if (k == MAX - 1) printf ("\n");
                }
            }
}


int main()
{
    int i, vet[MAX];
    for(i = 0; i < MAX; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }


    for(i = 0; i < MAX; i++)
    {
        printf(" %d ", vet[i]);
        if (i== MAX - 1 ) printf ("\n");
    }


bubble_sort(vet);
printf("Valores ordenados\n");

for (i = 0 ; i < MAX ; i++)
{
    printf(" %d ", vet[i]);
}
printf ("\n\n");
}