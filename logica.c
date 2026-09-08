#include<stdio.h>
#include <stdbool.h>
int main()
{
    3 == 4;
    int entrada;
    int entrada2;
   

    printf ("introduce un numero entero\n");
    scanf("%d",&entrada);
    scanf("%d", &entrada2);
    int cond2 = (entrada != 8);
    int cond1 =  (entrada >= 15);
    int cond3 = (entrada > 5) && (entrada2 == 4);
    int cond4;
    printf("cond1 es: %d\n",cond1);
    printf ("cond2 es: %d\n",cond2);
    printf("cond3 es: %d\n",cond3);
    if (entrada == 5 || entrada == 20){
        cond4 = !(5 > 10) || (20 < 15);
          printf("cond4 es: %d\n",cond4);
    }
  

    return 0;
}
