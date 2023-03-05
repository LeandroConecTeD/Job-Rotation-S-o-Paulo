#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n; // tamanho do vetor
    float faturamento[1000]; // vetor que guarda os valores de faturamento
    float soma = 0; // vari�vel para calcular a soma dos valores de faturamento
    float media; // vari�vel para guardar a m�dia mensal de faturamento
    int dias_acima_da_media = 0; // contador de dias em que o faturamento di�rio foi superior � m�dia
    float menor = 1e9; // inicializa a vari�vel menor com um valor muito grande
    float maior = -1e9; // inicializa a vari�vel maior com um valor muito pequeno
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    // l� os valores de faturamento e realiza as opera��es necess�rias
    for (int i = 0; i < n; i++) {
        printf("Digite o faturamento do dia %d: ", i+1);
        scanf("%f", &faturamento[i]);
        
        // atualiza a soma dos valores de faturamento
        soma += faturamento[i];
        
        // atualiza o menor valor de faturamento
        if (faturamento[i] < menor) {
            menor = faturamento[i];
        }
        
        // atualiza o maior valor de faturamento
        if (faturamento[i] > maior) {
            maior = faturamento[i];
        }
    }
    
    // calcula a m�dia mensal de faturamento
    media = soma / n;
    
    // conta os dias em que o faturamento di�rio foi superior � m�dia
    for (int i = 0; i < n; i++) {
        if (faturamento[i] > media) {
            dias_acima_da_media++;
        }
    }
    
    // exibe os resultados
    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("N�mero de dias com faturamento acima da m�dia mensal: %d\n", dias_acima_da_media);
    
    return 0;
}
