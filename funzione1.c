#include<stdio.h>
void funzion1(int numero, int );
int main(int argc, char const *argv[])
{
   
   int numer, numero1;
    /* code */
    printf( "inserisce il prima numero di A... ");
    scanf("%d", &numer);
       printf( "inserisce il secondo numero di B... ");
    scanf("%d", &numero1);
    
    funzion1(numer, numero1);
   
    return 0;
}
void funzion1(int numero, int numero1){
    int somma=0;
    int sottrazione=0;
    if (numero==0)
    {
      printf("la somma e neutra ");
    }
    else 
    if (numero>=0)
    {
        /* code */
        somma =numero+numero1;
        
        printf("la somma %d",somma);
    }
    else{

        if (numero1==1)
    {
        /* code */
        sottrazione =(numero1 - numero);
        printf(" la sottrazione %d", sottrazione);
    }
    else{
        if (numero1<=0)
        {
        printf("l'0perazione non puoi continuare ");
        }
        
    }

    }
    
    
    
    


 //  possiamo sviluppare una funzionalità 

}