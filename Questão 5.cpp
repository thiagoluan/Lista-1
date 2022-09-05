// QUESTÃO 5

//declaração das bibliotecas
#include<stdio.h>
#include<locale.h>

//protótipo da função do tipo char para calcular a média do aluno
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);  

int main(void){
    setlocale(LC_ALL, "Portuguese");
    //declaração das variáveis
    float p1, p2, p3, media;             
    int faltas,aulas;
    printf("Aluno Thiago Luan Moreira Sousa");
    printf("\n\n");
    //inserindo os valores das notas, quantidade de aulas e faltas
    printf("Digite a primeira nota: ");
    scanf("%f", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &p2);
    printf("Digite a terceira nota: ");
    scanf("%f", &p3);
    printf("Digite o total de aulas: ");
    scanf("%d", &aulas);
    printf("Digite o total de faltas: ");
    scanf("%d", &faltas);   
	//chamado da função que calcula a média e informa se ele está aprovado ou não 
    char s = situacao(p1, p2, p3, faltas, aulas, &media);  
return(0);
}

//função que calcula a média e informa se ele está aprovado ou não 
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){  

    printf("A média do aluno é %.1f\t", (*media = p1 + p2 + p3)/3); //calculando a média do aluno
    int a;                      // declarando uma variável para comparar a quantidade de faltas
    a=(100 * faltas/aulas);     //a está recebendo o cálculo da porcentagem de faltas
    if(a <= 25 && *media >= 6){  //se entrar nesse estrutura de decisão retorna que o aluno foi aprovado
    	printf("Aluno APROVADO");
            return'A';
        } 
    else if(a <= 25 && *media < 6){  //se entrar nesse estrutura de decisão retorna que o aluno foi reprovado
    	printf("Aluno REPROVADO");
            return'R'; 
        }
    else {
    	printf("Aluno REPROVADO POR FALTAS");   //se entrar nesse estrutura de decisão retorna que o aluno foi reprovado por faltas
            return'F'; 
        }
}
