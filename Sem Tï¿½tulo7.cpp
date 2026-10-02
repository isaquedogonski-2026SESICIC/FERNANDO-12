#include <stdio.h>

int main() {
    int count = 0;
    int num = 1;

    while (count < 5) {
        if (num % 3 == 0) {
            printf("%d\n", num);
            count++;
        }
        num++;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 100; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    i = 1;
    while (i <= 100) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 100);
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int i = 10;

    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    printf("FIM!\n");

    return 0;
}


#include <stdio.h>

int main() {
    int val = 0;

    while (val <= 100000) {
        printf("%d\n", val);
        val += 1000;
    }

    return 0;
}


#include <stdio.h>

int main() {
    double valor, soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%lf", &valor);
        soma += valor;
    }

    printf("Soma total: %.2lf\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    int valor, soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº inteiro: ", i + 1);
        scanf("%d", &valor);
        soma += valor;
    }

    printf("Média: %.2f\n", (float)soma / 10.0);
    return 0;
}


#include <stdio.h>

int main() {
    int valor, lidos = 0, soma = 0;

    while (lidos < 10) {
        printf("Digite um inteiro positivo (%d/10): ", lidos + 1);
        scanf("%d", &valor);
        if (valor > 0) {
            soma += valor;
            lidos++;
        }
    }

    printf("Média dos positivos: %.2f\n", (float)soma / 10.0);
    return 0;
}


#include <stdio.h>

int main() {
    double num, menor, maior;

    printf("Digite o 1º número: ");
    scanf("%lf", &num);
    menor = num;
    maior = num;

    for (int i = 1; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%lf", &num);
        if (num < menor) menor = num;
        if (num > maior) maior = num;
    }

    printf("Menor valor: %.2lf\nMaior valor: %.2lf\n", menor, maior);
    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("%d ", 2 * i + 1);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 50; i++) {
        soma += 2 * i;
    }

    printf("Soma dos 50 primeiros números pares: %d\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = N; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo par N: ");
    scanf("%d", &N);

    if (N % 2 != 0) {
        N--;
    }

    for (int i = 0; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo par N: ");
    scanf("%d", &N);

    if (N % 2 != 0) {
        N--;
    }

    for (int i = N; i >= 0; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo ímpar N: ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        N--;
    }

    for (int i = 1; i <= N; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int N;
    printf("Digite um inteiro positivo ímpar N: ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        N--;
    }

    for (int i = N; i >= 1; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um valor n positivo: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        soma += i;
    }

    printf("Soma dos %d primeiros números naturais: %d\n", n, soma);
    return 0;
}


#include <stdio.h>

int main() {
    int qtd, num, maior, count = 0;

    printf("Quantos números serão lidos? ");
    scanf("%d", &qtd);

    if (qtd <= 0) return 0;

    printf("Digite o 1º número: ");
    scanf("%d", &num);
    maior = num;
    count = 1;

    for (int i = 1; i < qtd; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
            count = 1;
        } else if (num == maior) {
            count++;
        }
    }

    printf("Maior número: %d\nQuantidade de vezes lido: %d\n", maior, count);
    return 0;
}


#include <stdio.h>

int main() {
    int num;
    printf("Digite um número entre 100 e 999: ");
    scanf("%d", &num);

    if (num >= 100 && num <= 999) {
        int c = num / 100;
        int d = (num / 10) % 10;
        int u = num % 10;
        printf("Centena: %d\nDezena: %d\nUnidade: %d\n", c, d, u);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num, total = 0, pares = 0;

    while (1) {
        printf("Digite um número (1000 para encerrar): ");
        scanf("%d", &num);

        if (num == 1000) break;

        total++;
        if (num % 2 == 0) {
            pares++;
            printf("%d é par.\n", num);
        } else {
            printf("%d é ímpar.\n", num);
        }
    }

    printf("Total de números lidos: %d\nTotal de pares: %d\n", total, pares);
    return 0;
}


#include <stdio.h>

int main() {
    int n1, n2, inicio, fim;
    int somaPares = 0;
    long long multImpares = 1;

    printf("Digite dois números: ");
    scanf("%d %d", &n1, &n2);

    if (n1 < n2) {
        inicio = n1;
        fim = n2;
    } else {
        inicio = n2;
        fim = n1;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 == 0) {
            somaPares += i;
        } else {
            multImpares *= i;
        }
    }

    printf("Soma dos pares: %d\n", somaPares);
    printf("Multiplicação dos ímpares: %lld\n", multImpares);

    return 0;
}


#include <stdio.h>

int main() {
    double nota, soma = 0;
    int count = 0;

    while (1) {
        printf("Digite uma nota (10 a 20): ");
        scanf("%lf", &nota);

        if (nota < 10 || nota > 20) break;

        soma += nota;
        count++;
    }

    if (count > 0) {
        printf("Média aritmética: %.2lf\n", soma / count);
    } else {
        printf("Nenhuma nota válida digitada.\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int num;
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int num, soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    printf("Soma dos divisores (exceto ele mesmo): %d\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }

    printf("Soma dos múltiplos de 3 ou 5 abaixo de 1000: %d\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    int i = num + 1;
    while (1) {
        if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0) {
            printf("Primeiro múltiplo após %d: %d\n", num, i);
            break;
        }
        i++;
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n;
    double H = 0.0;

    printf("Digite um valor inteiro positivo n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        H += 1.0 / i;
    }

    printf("H(%d) = %lf\n", n, H);
    return 0;
}


#include <stdio.h>

int main() {
    int N;
    double E = 1.0, fat = 1.0;

    printf("Digite um valor inteiro positivo N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fat *= i;
        E += 1.0 / fat;
    }

    printf("E = %lf\n", E);
    return 0;
}


#include <stdio.h>

double fatorial(int n) {
    double fat = 1.0;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    double S = 0.0;

    for (int i = 0; i < 5; i++) {
        S += (double)i / fatorial(2 * i);
    }

    printf("S = %lf\n", S);
    return 0;
}


#include <stdio.h>

int main() {
    int n;
    printf("Digite n: ");
    scanf("%d", &n);

    int somaA = 0;
    for (int i = 1; i <= n; i++) somaA += i;

    int somaB = 0;
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i % 2 != 0) somaB += i;
        else somaB -= i;
    }

    int somaC = 0;
    for (int i = 1; i <= n; i++) {
        somaC += (2 * i - 1);
    }

    printf("a) %d\nb) %d\nc) %d\n", somaA, somaB, somaC);
    return 0;
}


#include <stdio.h>

int main() {
    double S = 0.0;
    double num = 1.0, den = 1.0;

    while (num <= 99 && den <= 50) {
        S += num / den;
        num += 2.0;
        den += 1.0;
    }

    printf("S = %lf\n", S);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, d1, d2;
    srand(time(NULL));

    printf("Digite a quantidade de lançamentos: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("d1: %d, d2: %d -> ", d1, d2);
        if (d1 > d2) printf("d1 > d2\n");
        else if (d1 < d2) printf("d1 < d2\n");
        else printf("d1 = d2\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n, i, j, count = 0, num = 0;

    printf("Digite n, i, j: ");
    scanf("%d %d %d", &n, &i, &j);

    while (count < n) {
        if (num % i == 0 || num % j == 0) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

long long mdc(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long mmc(long long a, long long b) {
    return (a * b) / mdc(a, b);
}

int main() {
    long long res = 1;

    for (int i = 1; i <= 20; i++) {
        res = mmc(res, i);
    }

    printf("Menor número divisível por 1..20: %lld\n", res);
    return 0;
}


#include <stdio.h>

int main() {
    int inicio, fim, soma = 0;

    printf("Digite o valor inicial e valor final: ");
    scanf("%d %d", &inicio, &fim);

    if (inicio > fim) {
        printf("Intervalo de valores invalido\n");
        return 0;
    }

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("Soma dos ímpares neste intervalo: %d\n", soma);
    return 0;
}


#include <stdio.h>

int main() {
    long long somaQuadrados = 0, soma = 0;

    for (int i = 1; i <= 100; i++) {
        somaQuadrados += (i * i);
        soma += i;
    }

    long long quadradoSoma = soma * soma;
    long long diff = quadradoSoma - somaQuadrados;

    printf("Diferença: %lld\n", diff);
    return 0;
}


#include <stdio.h>

int main() {
    for (int i = 1000; i <= 9999; i++) {
        int alta = i / 100;
        int baixa = i % 100;
        int soma = alta + baixa;

        if (soma * soma == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    for (int a = 1; a < 1000; a++) {
        for (int b = a + 1; b < 1000; b++) {
            int c = 1000 - a - b;
            if (c > b) {
                if (a * a + b * b == c * c) {
                    printf("a = %d, b = %d, c = %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    double base, altura;

    do {
        printf("Digite a base do triângulo (> 0): ");
        scanf("%lf", &base);
    } while (base <= 0);

    do {
        printf("Digite a altura do triângulo (> 0): ");
        scanf("%lf", &altura);
    } while (altura <= 0);

    double area = (base * altura) / 2.0;
    printf("Área do triângulo: %.2lf\n", area);

    return 0;
}


#include <stdio.h>

int main() {
    int num, maior, menor, primeiro = 1;

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num < 0) break;

        if (primeiro) {
            maior = num;
            menor = num;
            primeiro = 0;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
    }

    if (!primeiro) {
        printf("Maior: %d\nMenor: %d\n", maior, menor);
    }

    return 0;
}


#include <stdio.h>

int main() {
    double r1, r2, r;

    while (1) {
        printf("Digite R1 e R2 (0 para sair): ");
        scanf("%lf %lf", &r1, &r2);

        if (r1 == 0 || r2 == 0) break;

        r = (r1 * r2) / (r1 + r2);
        printf("Resistência equivalente: %.2lf\n", r);
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    double val;

    while (1) {
        printf("Digite um valor: ");
        scanf("%lf", &val);

        if (val <= 0) break;

        printf("Quadrado: %.2lf\n", val * val);
        printf("Cubo: %.2lf\n", val * val * val);
        printf("Raiz Quadrada: %.2lf\n", sqrt(val));
    }

    return 0;
}


#include <stdio.h>

int main() {
    int idade, soma = 0, count = 0;

    while (1) {
        printf("Digite a idade (0 para parar): ");
        scanf("%d", &idade);

        if (idade == 0) break;

        soma += idade;
        count++;
    }

    if (count > 0) {
        printf("Idade média: %.2f\n", (float)soma / count);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int limit;
    printf("Digite um número positivo: ");
    scanf("%d", &limit);

    int a = 0, b = 1, c = 0;

    printf("%d %d ", a, b);
    while (c <= limit) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main() {
    int opcao;
    double vel;

    do {
        printf("\n1. Converter km/h para m/s\n");
        printf("2. Converter m/s para km/h\n");
        printf("3. Finalizar\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite velocidade em km/h: ");
            scanf("%lf", &vel);
            printf("Resultado: %.2lf m/s\n", vel / 3.6);
        } else if (opcao == 2) {
            printf("Digite velocidade em m/s: ");
            scanf("%lf", &vel);
            printf("Resultado: %.2lf km/h\n", vel * 3.6);
        }
    } while (opcao != 3);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secreto = rand() % 1000 + 1;
    int chute, tentativas = 0;

    do {
        printf("Digite seu chute (1 a 1000): ");
        scanf("%d", &chute);
        tentativas++;

        if (chute < secreto) {
            printf("O número secreto é maior.\n");
        } else if (chute > secreto) {
            printf("O número secreto é menor.\n");
        } else {
            printf("Acertou! Tentativas: %d\n", tentativas);
        }
    } while (chute != secreto);

    return 0;
}


#include <stdio.h>

int main() {
    int opcao;
    double n1, n2;

    do {
        printf("\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Saída\nOpção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois números: ");
            scanf("%lf %lf", &n1, &n2);
        }

        switch (opcao) {
            case 1: printf("Resultado: %.2lf\n", n1 + n2); break;
            case 2: printf("Resultado: %.2lf\n", n1 - n2); break;
            case 3: printf("Resultado: %.2lf\n", n1 * n2); break;
            case 4: 
                if (n2 != 0) printf("Resultado: %.2lf\n", n1 / n2);
                else printf("Erro: divisão por zero.\n");
                break;
        }
    } while (opcao != 5);

    return 0;
}


#include <stdio.h>

int main() {
    long long a = 1, b = 2, c = 0, somaPares = 0;

    while (b <= 4000000) {
        if (b % 2 == 0) {
            somaPares += b;
        }
        c = a + b;
        a = b;
        b = c;
    }

    printf("Soma dos termos pares de Fibonacci <= 4.000.000: %lld\n", somaPares);
    return 0;
}


#include <stdio.h>

int main() {
    double carlos = 3000.0;
    double joao = 1000.0;
    int meses = 0;

    while (joao < carlos) {
        carlos += carlos * 0.02;
        joao += joao * 0.05;
        meses++;
    }

    printf("Meses necessários: %d\n", meses);
    return 0;
}


#include <stdio.h>

int main() {
    double chico = 1.50;
    double ze = 1.10;
    int anos = 0;

    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Anos necessários: %d\n", anos);
    return 0;
}


#include <stdio.h>

int main() {
    double salario = 2000.0;
    double aumento = 0.015;

    salario += salario * aumento;

    for (int ano = 1997; ano <= 2026; ano++) {
        aumento *= 2;
        salario += salario * aumento;
    }

    printf("Salário em 2026: R$ %.2lf\n", salario);
    return 0;
}


#include <stdio.h>

int main() {
    int saque;
    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    int notas100 = saque / 100; saque %= 100;
    int notas50 = saque / 50;   saque %= 50;
    int notas20 = saque / 20;   saque %= 20;
    int notas10 = saque / 10;   saque %= 10;
    int notas5 = saque / 5;     saque %= 5;
    int notas2 = saque / 2;     saque %= 2;
    int notas1 = saque;

    printf("Notas de 100: %d\n", notas100);
    printf("Notas de 50: %d\n", notas50);
    printf("Notas de 20: %d\n", notas20);
    printf("Notas de 10: %d\n", notas10);
    printf("Notas de 5: %d\n", notas5);
    printf("Notas de 2: %d\n", notas2);
    printf("Notas de 1: %d\n", notas1);

    return 0;
}


#include <stdio.h>

int main() {
    int n, num = 1;
    printf("Digite n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n, primo = 1;
    printf("Digite um número > 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Número inválido.\n");
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) printf("%d é primo.\n", n);
    else printf("%d não é primo.\n", n);

    return 0;
}


#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;
    long long soma = 0;

    printf("Digite n: ");
    scanf("%d", &n);

    while (count < n) {
        if (ehPrimo(num)) {
            soma += num;
            count++;
        }
        num++;
    }

    printf("Soma dos %d primeiros primos: %lld\n", n, soma);
    return 0;
}


#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    long long soma = 0;

    for (int i = 2; i < 2000000; i++) {
        if (ehPrimo(i)) {
            soma += i;
        }
    }

    printf("Soma dos primos abaixo de 2 milhões: %lld\n", soma);
    return 0;
}


#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b, count = 0;
    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a; a = b; b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            count++;
        }
    }

    printf("Quantidade de primos entre %d e %d: %d\n", a, b, count);
    return 0;
}


#include <stdio.h>

int ehPrimo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a, b;
    long long soma = 0;
    printf("Digite a e b: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        int temp = a; a = b; b = temp;
    }

    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            soma += i;
        }
    }

    printf("Soma dos primos entre %d e %d: %lld\n", a, b, soma);
    return 0;
} 
#include <stdio.h>

int main() {
    int habitantes, codigo;
    float kwh, consumo, total_res = 0, total_com = 0, total_ind = 0;
    float maior_consumo = 0, menor_consumo = 0, soma_total = 0;

    printf("Digite o número de habitantes: ");
    scanf("%d", &habitantes);
    printf("Digite o valor do kWh: ");
    scanf("%f", &kwh);

    for (int i = 0; i < habitantes; i++) {
        printf("\nHabitante %d:\n", i + 1);
        printf("Consumo do mês (kWh): ");
        scanf("%f", &consumo);
        printf("Código (1-Residencial, 2-Comercial, 3-Industrial): ");
        scanf("%d", &codigo);

        if (i == 0) {
            maior_consumo = consumo;
            menor_consumo = consumo;
        } else {
            if (consumo > maior_consumo) maior_consumo = consumo;
            if (consumo < menor_consumo) menor_consumo = consumo;
        }

        soma_total += consumo;

        if (codigo == 1) total_res += consumo;
        else if (codigo == 2) total_com += consumo;
        else if (codigo == 3) total_ind += consumo;
    }

    printf("\nMaior consumo: %.2f kWh\n", maior_consumo);
    printf("Menor consumo: %.2f kWh\n", menor_consumo);
    printf("Média de consumo: %.2f kWh\n", soma_total / habitantes);
    printf("Total Residencial: %.2f kWh\n", total_res);
    printf("Total Comercial: %.2f kWh\n", total_com);
    printf("Total Industrial: %.2f kWh\n", total_ind);

    return 0;
}


#include <stdio.h>

int main() {
    int num, soma = 0, qtd = 0, maior = 0, menor = 0;
    int soma_pares = 0, qtd_pares = 0;

    while (1) {
        printf("Digite um número (0 para encerrar): ");
        scanf("%d", &num);

        if (num == 0) break;

        if (qtd == 0) {
            maior = num;
            menor = num;
        } else {
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }

        soma += num;
        qtd++;

        if (num % 2 == 0) {
            soma_pares += num;
            qtd_pares++;
        }
    }

    if (qtd > 0) {
        printf("\na) Soma: %d\n", soma);
        printf("b) Quantidade: %d\n", qtd);
        printf("c) Média: %.2f\n", (float)soma / qtd);
        printf("d) Maior: %d\n", maior);
        printf("e) Menor: %d\n", menor);
        if (qtd_pares > 0) {
            printf("f) Média dos pares: %.2f\n", (float)soma_pares / qtd_pares);
        } else {
            printf("f) Nenhum número par foi digitado.\n");
        }
    }

    return 0;
}


#include <stdio.h>

int ehPalindromo(int n) {
    int reverso = 0, temp = n;
    while (temp > 0) {
        reverso = reverso * 10 + (temp % 10);
        temp /= 10;
    }
    return n == reverso;
}

int main() {
    int maior = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int prod = i * j;
            if (ehPalindromo(prod) && prod > maior) {
                maior = prod;
            }
        }
    }

    printf("Maior palíndromo produto de dois números de 3 dígitos: %d\n", maior);
    return 0;
}


#include <stdio.h>

int letrasAte19(int n) {
    int tam[] = {0, 2, 4, 4, 6, 5, 4, 4, 4, 4, 3, 4, 4, 5, 8, 6, 9, 9, 8, 9};
    return tam[n];
}

int letrasDezena(int n) {
    int tam[] = {0, 0, 5, 7, 8, 9, 8, 7, 7, 7};
    return tam[n];
}

int letrasCentena(int n) {
    int tam[] = {0, 3, 8, 8, 12, 11, 10, 10, 10, 9};
    return tam[n];
}

int contarLetras(int n) {
    if (n == 1000) return 3;
    if (n == 100) return 4;

    int total = 0;
    int c = n / 100;
    int resto = n % 100;

    if (c > 0) {
        total += letrasCentena(c);
        if (resto > 0) total += 1;
    }

    if (resto > 0) {
        if (resto < 20) {
            total += letrasAte19(resto);
        } else {
            int d = resto / 10;
            int u = resto % 10;
            total += letrasDezena(d);
            if (u > 0) {
                total += 1 + letrasAte19(u);
            }
        }
    }

    return total;
}

int main() {
    int total_letras = 0;

    for (int i = 1; i <= 1000; i++) {
        total_letras += contarLetras(i);
    }

    printf("Total de letras de 1 a 1000: %d\n", total_letras);
    return 0;
}