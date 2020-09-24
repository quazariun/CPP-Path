#include <iostream>

using namespace std;

int main(){
  int n;
  double record, aux_time, aux_dist, average_speed;

  while(scanf("%d", &n) == 1){
    record = 0;

    for(int x=0; x < n; ++x){
      scanf("%lf %lf", &aux_time, &aux_dist);
      average_speed = aux_dist/aux_time;

      if(average_speed > record){
        printf("%d\n", x+1);
        record = average_speed; 
      }
    }
    
  }

  return 0;
}