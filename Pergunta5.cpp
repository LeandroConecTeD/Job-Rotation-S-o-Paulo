#include <stdio.h>
#include <string.h>

void inverte_string(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);
    inverte_string(str);
    printf("String invertida: %s\n", str);
    return 0;
}
