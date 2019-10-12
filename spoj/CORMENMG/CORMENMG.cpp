#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,t,num,result,final_res,last,indice_ini=0,indice_final;

    vector<int> vect;
    cin >> n;

    for(int x=0;x<n;++x){
        cin >> t;
        result = 0;
        final_res = 0;

        for(int h=0;h<t;h++){
            cin >> num;
            vect.push_back(num);
        }

        indice_ini = 0;
        indice_final=vect.size();


        for(int x=indice_ini;x<vect.size();++x){
                result += vect[x];

            if(result == 42){
                final_res++;
                indice_ini = x+1;
                x = indice_ini;
                result += vect[indice_ini];
                result = 0;
            }else if(result > 42){
                indice_ini++;
            }
        }

   
        cout << final_res << endl;
    }

}