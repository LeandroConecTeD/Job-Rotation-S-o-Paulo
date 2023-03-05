#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c = 0, pertence = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while (c < num) {
        c = a + b;
        a = b;
        b = c;
    }
    
    if (c == num) {
        pertence = 1;
    }
    
    if (pertence) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }
    
    return 0;
}
