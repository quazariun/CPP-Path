#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  int cifra_lenght = 0;
  int lines = 0;

  int flag = false;

  vector<string> input;
  vector<string> result;

  string aux;
  string value;
  string key;

  while(scanf("%d %d ", &cifra_lenght, &lines) == 2){
    input.clear();
    result.clear();

    getline(cin, value);
    getline(cin, key);

    for(int x = 0; x < lines; ++x){
      getline(cin, aux);

      input.push_back(aux);
    }

    for(int x = 0; x < lines; ++x){
      aux = "";
      flag = false;

      for (int y = 0; y < input[x].length(); y++){
        flag = false;

        for(int z = 0; z < cifra_lenght; z++){
          if(toupper(input[x][y]) == key[z] && flag == false){
            if(isupper(input[x][y])){
              aux += toupper(value[z]);
            }else{
              aux += tolower(value[z]);
            }
            flag = true;
          }

          if(toupper(input[x][y]) == value[z] && flag == false){
            if(isupper(input[x][y])){
              aux += toupper(key[z]);
            }else{
              aux += tolower(key[z]);
            }
            flag = true;
          }
        }

        if(flag == false){
          aux += input[x][y];
        }
      }

      result.push_back(aux);
    }

    for(int x=0; x<lines;x++){
      cout << result[x] << endl;
    }
    cout << endl;
  }
  return 0;
}