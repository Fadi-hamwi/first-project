#include<iostream>

using namespace std;
int main(){
	
	int sum_of_squares = 0;
	for(int i=1;i<=100;++i){     // No need to long long here 
		sum_of_squares += (i*i); 
	}
	int square_of_sum = 5050 * 5050; // Arthmetic Serial 100*(100+1)/2
	
	cout << "Ans is " << square_of_sum - sum_of_squares<< endl;
	
	
}
