#include <stdio.h>;
#include <math.h>;
int main (){

    float a;
    int b;
    b = 3;
    printf("ingrese un numero real ");
    scanf("%f", &a);
    float expoxd = pow(a,b);
    float rai = sqrt(expoxd);
    printf("%f",(a)); printf(" al cubo es:%f\n",expoxd);
    printf("la raiz cuadrada de %f es:",expoxd); printf("%f",rai);
    
    return 0;
}