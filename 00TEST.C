#include<stdio.h>
int main(int argc, char const *argv[])
{
  int numero, secondo ;
  int somma=0;
  int prodotto=0;
  int resto=0;
   printf("inserisce il primo numero ");
   scanf("%d", &numero);
   printf("inserisce il primo numero ");
   scanf("%d", & secondo);
   if (numero==secondo)
   {
    somma= numero+ secondo;
     printf("%d", somma);  
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
               printf("%d", prodotto);  
        }
            }
            
        }
        
    }
return 0;
}
    

