#include <iostream>

using namespace std;

int board[150][150];

void board_fill(int n, int m){
  for(int x=0;x<=m+1;++x){
    board[0][x] = -1;
    board[n+1][x] = -1; 
  }
  for(int x=0;x<=n+1;++x){
    board[x][0] = -1;
    board[x][m+1] = -1; 
  }
  for(int x=1;x<=n;++x){
    for(int y=1; y<=m; ++y){
      board[x][y] = 0;
    }
  }
}

void print_board(int n, int m){
  for(int x=1;x<=n;++x){
    for(int y=1; y<=m; ++y){
      printf("%d", board[x][y]);
    }
    printf("\n");
  }
}

void sum_cheese(int x, int y){
  board[x][y] = 9;

  int adj_test[2] = {1,-1};

  for(int z=0; z<2;++z){
    if(board[x + adj_test[z]][y] != 9 && board[ x + adj_test[z]][y] != -1){
      board[x+adj_test[z]][y]++;
    }

    if(board[x][y + adj_test[z]] != 9 && board[x][y + adj_test[z]] != -1){
      board[x][y+adj_test[z]]++;
    }
  }

}

int main(){
  int n, m, aux;

  while(scanf("%d %d", &n, &m) == 2){
    board_fill(n,m);

    for(int x=0; x < n; ++x){
      for(int y=0; y < m; ++y){
        scanf("%d", &aux);

        if(aux == 0) continue;

        sum_cheese(x+1,y+1);
      }
    }

    print_board(n,m);
  }



  return 0;
}