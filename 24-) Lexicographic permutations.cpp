#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int target = 1000000;
	int cnt = 1;
	string number = "0123456789";
	while(next_permutation(number.begin(), number.end())){
		cnt++;
		if(cnt == target ){
			cout << number << endl;
			return 0;
		}
	}
	



}
