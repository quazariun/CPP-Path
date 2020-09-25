#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int c;
  int aux_1, aux_2;

  vector<string> musics{"PROXYCITY","P.Y.N.G.", "DNSUEY!", "SERVERS",
                    "HOST!", "CRIPTONIZE", "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

  scanf("%d", &c);

  for (int x = 0; x < c; ++x)
  {
    scanf("%d %d", &aux_1, &aux_2);

    printf("%s\n", musics[aux_1+aux_2].c_str());
  }

  return 0;
}