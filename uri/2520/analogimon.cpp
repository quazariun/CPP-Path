#include <iostream>

using namespace std;

int main(){
    int lines, cols;
    int cordx_poke, cordy_poke, cordx_master, cordy_master;
    int aux, result;

    while(scanf("%d %d", &lines, &cols) == 2){
        
        for(int x=1; x <= lines; x++){
            for(int y=1; y <= cols; y++){
                scanf(" %d", &aux); 

                if(aux != 0){
                    if(aux == 1){
                        cordx_master = x;
                        cordy_master = y;
                    }else{
                        cordx_poke = x;
                        cordy_poke = y;
                    }
                }           
            }
        }    
        result = abs(cordx_master-cordx_poke)+abs(cordy_master-cordy_poke);

        printf("%d\n", result);
    }

    return 0;
}