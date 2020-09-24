#include <iostream>

using namespace std;

int main(){
  int n, d, num_aux;
  int day_official, month_official, year_official;
  int day_aux, month_aux, year_aux;
  int result;
  bool flag = false;

  while(scanf("%d %d", &n, &d) == 2){
    flag = false;

    for(int x=0; x<d; ++x){
      scanf("%d/%d/%d", &day_aux, &month_aux, &year_aux);
      result = 0;

      for(int x=0; x < n; ++x){
        scanf("%d", &num_aux);
        result += num_aux;
      }

      if(result == n && flag == false){
        day_official = day_aux;
        month_official = month_aux;
        year_official = year_aux;
        flag = true;
      }
    }

    if(flag){
      printf("%d/%d/%d\n", day_official, month_official, year_official);    
    }else{
      printf("Pizza antes de FdI\n");
    }
  }

  return 0;
}