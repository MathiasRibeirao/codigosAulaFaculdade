/*#include <stdio.h>

int main() {
    printf("Tamanhos dos tipos de dados em bytes:\n");
    printf("char: %zu bytes\n", sizeof(char));
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));

    return 0;
}
*/
/*
#include <stdio.h>
#include <math.h>

int main() {
    double raio, area, perimetro;

    printf("Insira o valor do raio de um circulo: \n");
    scanf("%lf", &raio);

    area = M_PI * (raio * raio);
    perimetro = 2 * M_PI * raio;

    printf("Este e o valor da area do seu raio: %0.2lf  \n", area);
    printf("Este e o valor do perimetro do seu raio: %0.2lf  \n", perimetro);

    return 0;
}
*/
/*
#include <stdio.h>


int main() {
    char primeiroCaracter, segundoCaracter;

    printf("Digite seu primeiro caracter:  ");
    scanf("%c", &primeiroCaracter);
    getchar();
    printf("\nDigite seu segundo caracter: ");
    scanf("%c", &segundoCaracter);


    printf("\nseu primeiro caracter: \'%c\' \n", primeiroCaracter);
    printf("\nseu segundo caracter: \'%c\' \n", segundoCaracter);

    return 0;
}
*/
/*
#include <stdio.h>


int main() {
    int valorDigitado, valorTransformadoFloat;
    float valorFinal;

    printf("\nDigite o valor inteiro: ");
    scanf("%d",&valorDigitado);

    valorTransformadoFloat = (float) valorDigitado;
    valorFinal = valorTransformadoFloat * 0.5;
    valorFinal = (int) valorFinal;

    printf("\nO valor final e: %f", valorFinal);

    return 0;
}
*/
/*
#include <stdio.h>


int main() {
    int valorDigitado;

    printf("insira um valor: \n");
    scanf("%d", &valorDigitado);

    if (valorDigitado % 2 == 0) {
        printf("numero e par.\n");
    } else {
        printf("numero impar. \n");
    }

    return 0;
}
*/
/*
#include <stdio.h>


int main() {
    float nota1, nota2, nota3, media;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);


    media = (nota1 + nota2 + nota3) / 3;


    if (media >= 7) {
        printf("Aprovado");
    } else {
        printf("Sua nota foi tao bosta que nem vou te falar nada rsrsrsrsr");
    }
    return 0;
}
*/
/*
#include <stdio.h>


int main() {
    float nota1, nota2, nota3, media;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Insira sua terceira nota: ");
    scanf("%f", &nota3);


    media = (nota1 + nota2 + nota3) / 3;

    media >= 7 ? printf("Aprovado") : printf("Reprovado");

    return 0;
}
*/
#include <stdio.h>
int main(void) {
    float numeroFatorial, contador, resultado = 1;

    printf("Digite o numero que deseja fazer o fatorial:  ");
    scanf("%f",&contador);


    while (contador > 0) {
        resultado = resultado * contador;
        contador--;
    }
    printf("seu valor fatorial:  %0.0f\n",resultado);

    return 0;
}