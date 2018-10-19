#include<stdio.h>
int main()
{
    int N,quotient,quotient1,quotient2,quotient3,quotient4,quotient5,quotient6;
    int quo,quo1,quo2,quo3,quo4,quo5;

    scanf("%d", &N);

    quotient = N/100;
    quo = N%100;
    quotient1 = quo/50;
    quo1 = quo%50;
    quotient2 = quo1/20;
    quo2 = quo1%20;
    quotient3 = quo2/10;
    quo3 = quo2%10;
    quotient4 = quo3/5;
    quo4 = quo3%5;
    quotient5 = quo4/2;
    quo5 = quo4%2;
    quotient6 = quo5/1;

    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", quotient);
    printf("%d nota(s) de R$ 50,00\n", quotient1);
    printf("%d nota(s) de R$ 20,00\n", quotient2);
    printf("%d nota(s) de R$ 10,00\n", quotient3);
    printf("%d nota(s) de R$ 5,00\n", quotient4);
    printf("%d nota(s) de R$ 2,00\n", quotient5);
    printf("%d nota(s) de R$ 1,00\n", quotient6);

    return 0;
}
