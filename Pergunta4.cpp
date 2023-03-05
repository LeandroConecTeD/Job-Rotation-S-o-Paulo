#include <stdio.h>

int main() {
    float faturamento_total = 0.0;
    float faturamento_sp = 67.83643;
    float faturamento_rj = 36.67866;
    float faturamento_mg = 29.22988;
    float faturamento_es = 27.16548;
    float faturamento_outros = 19.84953;

    // Calcula o faturamento total
    faturamento_total = faturamento_sp + faturamento_rj + faturamento_mg + faturamento_es + faturamento_outros;

    // Calcula e exibe o percentual de representação de cada estado
    printf("SP: %.2f%%\n", (faturamento_sp / faturamento_total) * 100);
    printf("RJ: %.2f%%\n", (faturamento_rj / faturamento_total) * 100);
    printf("MG: %.2f%%\n", (faturamento_mg / faturamento_total) * 100);
    printf("ES: %.2f%%\n", (faturamento_es / faturamento_total) * 100);
    printf("Outros: %.2f%%\n", (faturamento_outros / faturamento_total) * 100);

    return 0;
}
