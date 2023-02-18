// 11111
//  2222
//   333
//    44
//     5

#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int k=0;k<n-i;k++){
			cout<<i+1;
		}
		cout<<endl;
	}
}