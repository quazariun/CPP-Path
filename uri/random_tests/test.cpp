#include <iostream>

using namespace std;

int main()
{
    double n; //numeros double
    double soma = 0;
    int i = 0;
    int positivos = 0;
    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &n);

        if (n > 0)
        {
            positivos = positivos + 1;
            soma = soma + n;
        }
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", soma / 6);
    return 0;
}