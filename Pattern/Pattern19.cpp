// *****
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int k=1;k<n-i+1;k++){
			cout<<"*";
		}
		cout<<endl;
	}
}