#include <stdio.h>
#define max 10
int v[10]= { 9,4,1,3,1,10,7,5,6,8};

void bolha (int v[]){
int i,houve_troca=1,aux;
	while (houve_troca){a
	houve_troca=0;
	for (i=0;i<max-1;i++){
		if (v[i]>v[i+1]){
			aux=v[i];
			v[i]=v[i+1];
			v[i+1]=aux;
			houve_troca=1;
		
			}

		}
//	imprime(v);

	}//while

}

int busca(int codigo, int tamanho){
int meio, inf, sup;
inf =0; sup=tamanho -1;
meio = (inf+sup)/2;
printf ("\nprocurando por %d com inf = %d sup = %d e meio = %d elemento atual %d\n",codigo,inf,sup,meio,v[meio]);
while (inf <= sup){
    if (v[meio]==codigo)
        return meio;
        else if (codigo > v[meio])
            inf = meio +1;
            else
            sup = meio -1;
meio = (inf+sup)/2;
printf ("\vprocurando por %d com inf = %d sup = %d e meio = %d elemento atual %d\n",codigo,inf,sup,meio,v[meio]);
}
if (inf>sup)
    meio=-1;
return meio;
}


void mostra (){
int i ;
printf ("----------------------------------\n");
for (i=0;i<10 ; i++)
    printf ("v[%d] =  %d\n",i,v[i]);
printf ("----------------------------------\n\n\n");

}

int main (){
int b,pos;
mostra();
bolha(v);
mostra();
printf ("Digite algum elemento para busca:");
scanf("%d",&b);
pos=busca(b,max);
if (pos!=-1)
      printf ("Encontrado na posicao %d\n",pos);
      else
      printf ("Elemento nao encontrado");
}
