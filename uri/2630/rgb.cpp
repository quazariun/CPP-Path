#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int t;
  char word[100];
  vector<int> rgb(3);
  int eye, mean;

  scanf("%d", &t);

  for(int x=0; x<t; ++x){
    scanf("%s", word);

    scanf("%d %d %d", &rgb[0], &rgb[1], &rgb[2]);

    eye = double(0.30*rgb[0]+0.59*rgb[1]+0.11*rgb[2]);
    mean = double((rgb[0]+rgb[1]+rgb[2])/3);

    sort(rgb.begin(),rgb.end());

    printf("Caso #%d: ", x+1);
    switch (word[1])
    {
    case 'y':
      printf("%d\n", eye);
      break;
    case 'e':
      printf("%d\n", mean );
      break;
    case 'a':
      printf("%d\n", rgb[2]);
      break;
    case 'i':
      printf("%d\n", rgb[0]);
      break;
    default:
      break;
    }
  }

  /*abordagens:
    eye:  P = 0, 30R + 0, 59G + 0, 11B
    mean: média aritmética
    max: maximo
    min: minimo
  */

  return 0;
}