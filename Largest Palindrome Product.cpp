#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int ans = 0;
	for(int i=999; i>=101;--i){ // Try to print the output of the i and j during the excution of the loop to better understand the problem
		for(int j=i;j >= 101;--j){
			int product = j*i;
			string original = to_string(product);
			string reversed = original;
			reverse(reversed.begin(), reversed.end());
			
			if(reversed == original){
				ans = max(ans, i*j);
			}
		}
		
	}
	cout << ans << endl;
	return 0;
	
}
