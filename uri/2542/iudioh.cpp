#include <iostream>

using namespace std;

int m_hand[120][120];
int l_hand[120][120];

int main(){
  int n, m, l;
  int aux;
  int choice_m, choice_l, attribute;

  while(scanf("%d", &n) == 1){
    scanf("%d %d", &m, &l);
  
    for(int x=0; x < m; ++x){
      for(int i=0; i < n; ++i){
        scanf("%d", &aux);
        m_hand[x][i] = aux;
      }
    }

    for(int y=0; y < l; ++y){
      for(int j=0; j < n; ++j){
        scanf("%d", &aux);
        l_hand[y][j] = aux;
      }
    }

    scanf("%d %d", &choice_m, &choice_l);

    scanf("%d", &attribute);

    if(m_hand[choice_m-1][attribute-1] > l_hand[choice_l-1][attribute-1]){
      printf("Marcos\n");
    }else if(l_hand[choice_l-1][attribute-1] > m_hand[choice_m-1][attribute-1]){
      printf("Leonardo\n");
    }else{
      printf("Empate\n");
    }

  }

  return 0;
}