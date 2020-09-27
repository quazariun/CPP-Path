#include <iostream>
#include <vector>

using namespace std;

typedef char word[300];

int main(){
  vector<word> jogadas(3);
  vector<string> frases{"Os atributos dos monstros vao ser inteligencia, sabedoria...","Iron Maiden's gonna get you, no matter how far!","Urano perdeu algo muito precioso...","Putz vei, o Leo ta demorando muito pra jogar..."};
  int vect[5] = {3,1,2,3,2};
  //papel = 1, tesoura = 2, pedra = 2
  //pedra,papel,tesoura,pedra,papel
  bool flag = false;
  int hand[6];

  while(scanf("%s %s %s", jogadas[0], jogadas[1], jogadas[2]) == 3){
    flag = false;

    for(int x=0; x<3; ++x){
      switch (jogadas[x][2])
      {
      case 'p':
        hand[x+1] = 1;
        break;
      case 's':
        hand[x+1] = 2;
        break;
      case 'd':
        hand[x+1] = 3;
        break;
      default:
        break;
      }
    }
    hand[0] = hand[3];
    hand[4] = hand[1];

    for(int x=1; x<=3; ++x){
      if(hand[x-1] == vect[hand[x]-1] && hand[x+1] == vect[hand[x]-1]){
        printf("%s\n", frases[x-1].c_str());
        flag = true;
      }
    }

    if(!flag){
      printf("%s\n", frases[3].c_str());
    }

  }
  return 0;
}