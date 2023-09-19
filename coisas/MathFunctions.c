#include <stdio.h>
#include <math.h>

int main(){

    double A = sqrt(9); //sqrt significa o square root, ou seja, a raiz quadrada do numero dentro do parenteses.
    double B = pow(2, 4); //pow é ponteciação o rpimeiro numero do parentese é a base e o segundo o numero de vezes que ele vai multiplicar a si mesmo ou 
    int C = round(3.14); //round é para arrendondar
    int D = ceil(3.14); //ceil vai arredontar para cima
    int E = floor(3.14); //ceil vai arredontar para baixo
    double F = fabs(-100); // valor absoloto, ou seja o quao longe um numero esta de 0
    double G = log(3); // logaritmos
    double H = sin(45); //seno
    double J = cos(45); //cosceno
    double K = tan(45); //tangente

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the size of the radius of your circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI*pow(radius, 2);

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);


    return 0;

}