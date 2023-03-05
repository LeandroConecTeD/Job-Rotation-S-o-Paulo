#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int n; // tamanho do vetor
    float faturamento[1000]; // vetor que guarda os valores de faturamento
    float soma = 0; // variável para calcular a soma dos valores de faturamento
    float media; // variável para guardar a média mensal de faturamento
    int dias_acima_da_media = 0; // contador de dias em que o faturamento diário foi superior à média
    float menor = 1e9; // inicializa a variável menor com um valor muito grande
    float maior = -1e9; // inicializa a variável maior com um valor muito pequeno
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    // lê os valores de faturamento e realiza as operações necessárias
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
    
    // calcula a média mensal de faturamento
    media = soma / n;
    
    // conta os dias em que o faturamento diário foi superior à média
    for (int i = 0; i < n; i++) {
        if (faturamento[i] > media) {
            dias_acima_da_media++;
        }
    }
    
    // exibe os resultados
    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("Número de dias com faturamento acima da média mensal: %d\n", dias_acima_da_media);
    
    return 0;
}
