//QUEST�O 4

//declara��o das bibliotecass
#include <stdio.h>
#include <math.h>

void calc_hexagono(float l, float *area, float *perimetro); //prot�tipo da fun��o 

int main(){
	float l, perimetro, area;            //declara��o de vari�veis
    printf("Digite o tamanho do lado: ");
    scanf("%f", &l);
    calc_hexagono(l, &area, &perimetro);         //chamado da fun�ao que caucula a �rea e o per�metro
    printf("A area e: %.2f\n", area);            //exibindo o valor da �rea do hex�gono
    printf("O perimetro e: %.2f\n", perimetro);  //exibindo o valor do per�metro
	return 0;
}

void calc_hexagono(float l, float *area, float *perimetro){   //fun��o que calcula a �rea e o per�metro do hex�gono
	*area = (3 * pow(l, 2) * sqrt(3))/ 2;       //*area est� recebendo o c�lculo da �rea
    *perimetro = 6 * l;                         //*per�metro est� recebendo o c�lculo do per�metro
}
