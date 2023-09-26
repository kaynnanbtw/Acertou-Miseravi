#include <stdio.h>

// Função para realizar a adição (o = 1)
long long int adicao(long long int a, long long int b) {
    return a + b;
}

// Função para realizar a subtração (o = 2)
long long int subtracao(long long int a, long long int b) {
    return a - b;
}

// Função para realizar a multiplicação (o = 3)
long long int multiplicacao(long long int a, long long int b) {
    return a * b;
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int o;
        long long int a, b;
        scanf("%d %lld %lld", &o, &a, &b);

        switch (o) {
            case 1:
                printf("%lld\n", adicao(a, b));
                break;
            case 2:
                printf("%lld\n", subtracao(a, b));
                break;
            case 3:
                printf("%lld\n", multiplicacao(a, b));
                break;
        }
    }

    return 0;
}
