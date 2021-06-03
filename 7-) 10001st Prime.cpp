#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int cnt_of_prime = 0;
	int candidate_ans =0;
	
	for(int i=2;cnt_of_prime < 10001;i++){
		bool check = 0;
		for(int j=2;j<=sqrt(i);++j){
			if(i % j == 0 ){
				check = 1;
				break;
			}
		}
		if(check == 0){
			cnt_of_prime++;
			candidate_ans = i;
		}
	}
	cout << "The Answer is : " <<  candidate_ans << endl;

}
