#include<iostream>
#include<cmath>
#define ll long long 
using namespace std;

int main(){
	bool ok=0;
	ll sum = 0;
	for(int i=2;i <=2000000; ++i){
		ok = 0;
		for(int j=2;j<=sqrt(i);++j){
			if(i % j ==0){
				ok = 1;
				break;
			}
		}
		if(!ok){
			sum += i;
		}
	}
	
	cout << sum << endl;
	return 0;
}
