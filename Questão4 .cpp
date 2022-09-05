//QUESTÃO 4

//declaração das bibliotecass
#include <stdio.h>
#include <math.h>

void calc_hexagono(float l, float *area, float *perimetro); //protótipo da função 

int main(){
	float l, perimetro, area;            //declaração de variáveis
    printf("Digite o tamanho do lado: ");
    scanf("%f", &l);
    calc_hexagono(l, &area, &perimetro);         //chamado da funçao que caucula a área e o perímetro
    printf("A area e: %.2f\n", area);            //exibindo o valor da área do hexágono
    printf("O perimetro e: %.2f\n", perimetro);  //exibindo o valor do perímetro
	return 0;
}

void calc_hexagono(float l, float *area, float *perimetro){   //função que calcula a área e o perímetro do hexágono
	*area = (3 * pow(l, 2) * sqrt(3))/ 2;       //*area está recebendo o cálculo da área
    *perimetro = 6 * l;                         //*perímetro está recebendo o cálculo do perímetro
}
