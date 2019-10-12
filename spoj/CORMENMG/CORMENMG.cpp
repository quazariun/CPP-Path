#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,t,num,result,final_res,last,indice_ini=0,indice_final=0;

    vector<int> vetor_nums;
    cin >> n;

    for(int x=0;x<n;++x){
        cin >> t;
        result = 0;
        final_res = 0;
        vetor_nums.clear();

        for(int h=0;h<t;h++){
            cin >> num;
            vetor_nums.push_back(num);
        }

        indice_ini = 0;

        for(int x=indice_ini;x<vetor_nums.size()*vetor_nums.size();++x){

            if(result == 42){
                final_res++;
                indice_ini = indice_final+1;
                result = 0;
            }else if(result > 42){
                result -= vetor_nums[indice_ini];
                indice_ini++;
            }else if(result < 42){
                result += vetor_nums[indice_final];
                indice_final++;
            }

            if(indice_final > vetor_nums.size()){
                break;
            }
        }

   
        cout << final_res << endl;
    }

}