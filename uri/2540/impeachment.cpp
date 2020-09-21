#include <iostream>

using namespace std;

int main(){
  int n, aux;
  double impeach;

  while(scanf("%d", &n) == 1){
    impeach = 0;
    
    for(int x=0; x<n; ++x){
      scanf("%d", &aux);

      if( aux == 1){
        impeach++;
      }
    }

    impeach >= double((n/3.0)*2.0) ? printf("impeachment\n") : printf("acusacao arquivada\n"); 
  }

  return 0;
}