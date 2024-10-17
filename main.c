#include <stdio.h>
int main() {
    int n;
    int i;
    printf("Inserisci un numero intero: ");
    scanf("%d", &n);
    printf("I divisori di %d sono: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}