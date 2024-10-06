/*Alexis Aguirre Rojas P_8
  Exponenciacion */
#include <stdio.h>
#include <stdlib.h>


int exp_for(int a, int b)
{
    int res = 1;
    int i;

    for(i = 0; i < b; i++)
    {
        res = res * a;
    }

    return(res);
}

int exp_while(int a, int b)
{
    int res = 1;
    int i = 0;

    while(i < b)
    {
        res = res * a;
        i = i + 1;
    }

    return(res);
}

int exp_dowhile(int a, int b) {
    
    int res = 1;
    int i = 0;

    do 
    {
        res = res * a;
        i = i + 1;
    }  while (i < b); 
      
      return res;
}
     
int main()
{
    int a, b, res;
    
    printf("Dame la base: ");
    scanf("%d", &a);
    printf("Dame el exponente: ");
    scanf("%d", &b);

    printf("\nExponenciacion con for\n");
    res = exp_for(a, b);
    printf("\nEl resultado es: %d\n", res);

    printf("\n Exponenciacion con while\n");
    res = exp_while(a, b);
    printf("\n El resultado es: %d\n", res);

    printf("\n Exponenciacion con do-while\n");
    res = exp_dowhile(a, b);
    printf("\n El resultado es: %d\n", res);


    return 0;
}
