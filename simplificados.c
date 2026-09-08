#include<stdio.h>
int main () {
int x = 10;
int y = 4;
printf ("x=%d y=%d\n",x,y);
int simpi = (x *= y);
int resti = (x %= 7);
int resultado1 = x++;
int resultado2 = ++y;

printf (" x*= y es:%d\n", simpi);
printf (" x %= 7 es:%d\n", resti);
printf (" x++ = %d\n", resultado1);
printf (" ++y = %d\n", resultado2);
printf("Valor real final en memoria -> x: %d, y: %d\n", x, y);



return 0;
}