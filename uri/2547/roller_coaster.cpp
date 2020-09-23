#include <iostream>

using namespace std;

int main(){
  int n, a_min, a_max;
  int result, aux;

  while(scanf("%d %d %d", &n, &a_min, &a_max) == 3){
    result = 0;

    for(int x=0; x < n; ++x){
      scanf("%d", &aux);

      if(aux >= a_min && aux <= a_max){
        result++;
      }
    }

    printf("%d\n", result);
  }

  return 0;
}