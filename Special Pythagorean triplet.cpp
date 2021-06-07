#include<iostream>
#include<cmath>
using namespace std;

int main(){
	for(int i =1; i < 333;++i){
		for(int j = i+1; j < 666;++j){
			for(int z = j+1; z < 1000; ++z){
				if(i + j + z == 1000 && pow(z, 2) == pow(i, 2) + pow(j, 2)){
						cout << "The Numbers are :" << i << " and " << j << " and " << z << endl;
						cout << "The Answer of the problem is : " << i*j*z << endl;
						return 0;
					}
				}
			}
		}


	return 0;

}
