#include<stdio.h>
int main(int argc, char const *argv[])
{
  int numero, secondo ;
  int somma=0;
  int prodotto=0;
  int resto=0;
   printf("inserisce il primo numero A:");
   scanf("%d", &numero);
   printf("inserisce il secondo  numero B:");
   scanf("%d", & secondo);
   if (numero==secondo)
   {
    somma= numero+ secondo;
     printf(" la somma e: \%d", somma);  
    /* code */
   }
   else{
    if (numero<=0)
    {
     printf(" fai Attenzione che questo sistema lavoro solo numero reali ma positiva ");  
    }
    else{
        if (numero==0)
        {
            /* code */
            printf(" fai Attenzione che questo sistema lavoro solo partendo da 1 ");  
        }
        else{
            if (numero==1)
            {
              prodotto=numero*secondo;
               printf("il prodotto e; %d", prodotto);  
        }
            }
            
        }
        if (secondo==0)
        {
            /* code */
            printf("Fai ATTENZIONE NON TENTARE DI MOLTIPLICAZIONE ");
        
        }
        else{
            if ( secondo==1)
        {
            resto = somma + secondo;
            printf(" resto uguale A: %d", resto);
            /* code */
        }
        
        }
    }
return 0;
}
    

