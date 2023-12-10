#include<stdio.h>
int main()
{
    float A,B,C;
    double pi;
    double TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;

    scanf("%f%f%f",&A,&B,&C);
    pi=3.14159;
    //TRIANGULO
    TRIANGULO=0.5*A*C;

    //CIRCULO
    CIRCULO=pi*C*C;

    //TRAPEZIO
    TRAPEZIO=0.5*(A+B)*C;

    //QUADRADO
    QUADRADO= B*B;

    //RETANGULO
    RETANGULO=A*B;


    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);

    return 0;

}
