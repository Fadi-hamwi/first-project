#include<iostream>
#include<cmath>
using namespace std;
int sum(int n, int a, int b){
	return n * (a+b)/2;

}

int main(){
	int multiple_of_five = sum(999/5,5,995);
	int multiple_of_three = sum(999/3,3,999);
	int common_multiples = sum(999/15, 15,990);
	
	cout << multiple_of_five + multiple_of_three - common_multiples << endl;
	
	return 0;
}
