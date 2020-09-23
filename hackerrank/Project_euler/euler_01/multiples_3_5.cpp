#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long int huge;

huge multiples(int n, int divisor){
  
  if(n < divisor) return 0;

  int last_multiple = n;
  huge count = 0;
  double times;

  while(last_multiple%divisor != 0){
      last_multiple--;
  }

  times = last_multiple/divisor;
  count = times/2 * (2*divisor+ ((times-1)*divisor) );

  return count;
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d", &t);

    huge result;
    int n, times;

    for(int x=0; x<t; ++x){
        scanf("%d", &n);
        --n;

        result = 0;

        result = (multiples(n,3)+multiples(n,5))-multiples(n, 15);

        printf("%llu\n", result);
    }

    return 0;
}
