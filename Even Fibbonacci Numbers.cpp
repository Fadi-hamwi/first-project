#include<iostream>
#include<cassert>
#define ll long long
using namespace std;

int Fib[100005];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    
    Fib[1] = 1;
    for(int i=2; Fib[i-1] < 4000000 ; ++i){
		Fib[i]= Fib[i-1] + Fib[i-2];
	}
	
	int ans =0;
	for(int i=2;  Fib[i] <= 4000000 ; ++i){
		if(Fib[i] % 2 == 0)
			ans += Fib[i];
	}
	cout << ans << endl;
	return 0;
}
