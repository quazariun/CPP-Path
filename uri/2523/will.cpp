#include <iostream>

using namespace std;

int main(){
    char word[100];
    int msg_size, aux;


    while(scanf("%s", word) == 1){
        scanf("%d", &msg_size);

        for(int x=0; x < msg_size; ++x){
            scanf("%d", &aux);

            printf("%c", word[aux-1]);
        }
        printf("\n");
    }

    return 0;
}