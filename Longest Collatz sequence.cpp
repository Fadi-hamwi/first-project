#include <iostream>
using namespace std;
int main()
{
    int chain_long = 1;
    int ans =0, candidate_sol=0;
    for(int i=1;i<1000000;++i){
        chain_long=1;
        long long starting_num = i;

        while(starting_num > 1){
            (starting_num %2 == 0) ? starting_num /=2 : starting_num = (long long)(3*starting_num +1) ;
            chain_long++;
        }
        if(ans < chain_long){
            candidate_sol = i;
            ans = chain_long;
        }
         
    }
    
    cout << "sol is : " << candidate_sol << " and the chain long is : " << chain_long<< endl;
    return 0;
}
