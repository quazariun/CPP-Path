#include <iostream>

using namespace std;

int main(){
    int m;
    int n, c;
    double parcial_1, parcial_2;
    double result;

    while(scanf("%d", &m) == 1){
        result = 0;
        parcial_1 = 0;
        parcial_2 = 0;

        for(int x = 0; x < m; ++x){
            scanf("%d %d", &n, &c);

            parcial_1 += n * c;
            parcial_2 += c;
        }

        result = parcial_1/(parcial_2*100);

        printf("%.4lf\n", result);
    }

    return 0;
}