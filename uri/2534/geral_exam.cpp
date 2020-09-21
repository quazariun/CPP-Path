#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> people;

int main(){
    int n, q;
    int point, select;

    while(scanf("%d %d", &n, &q) == 2){
        people.clear();

        for(int x=0; x < n; ++x){
            scanf("%d", &point);
            people.push_back(point);
        }
        sort(people.begin(), people.end());

        for(int y=0; y < q; ++y){
            scanf("%d", &select);
            printf("%d\n", people[people.size()-select]);
        }
    }


    return 0;
}