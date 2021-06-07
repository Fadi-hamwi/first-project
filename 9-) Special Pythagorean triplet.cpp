#include<iostream>
#include<cmath>
using namespace std;

int main(){
	for(int i =1; i < 333;++i){          /* If we divided 1000 by 3 we will get 333 and because a < b < c and not equal ,
						so the first number have to be less than 333,the second one is less than 666, and the third one is less than 1000 */
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
