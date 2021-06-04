#include<iostream>
#include<cmath>
#include<unordered_set>
#define ll long long 
using namespace std;

int main(){
	ll triangular_num = 0;

	for(int i=0;; ++i){
		triangular_num = (long long)i*(i+1)/2; // Triangular nth number formula n*(n+1)/2
		unordered_set<ll>factors;    
		for(int j=1;j <= sqrt(triangular_num);++j){
			if(triangular_num % j ==0){
				factors.emplace(j);    // Run it on online cpp Compiler cause it will take time depends on your machine
				factors.emplace(triangular_num / j);
			}
		}
		if(factors.size() >= 500){
			cout << i << endl;
			break;
		}
		factors.clear();
	}
	cout << triangular_num << endl;	
	return 0;
}
