//     1
//    121
//   12321
//  1234321
// 123454321

#include<iostream>
using namespace std;
int main(){
	int n=5;
	
	for(int i=1;i<=n;i++){

		for(int j=1;j<=n-i;j++){
			cout<<" ";
		} 
		int count=1;
		for(int k=1;k<=i;k++){
			cout<<count;
			count++;
		}
		int count2=i-1;
		for(int l=1;l<=i-1;l++){
			cout<<count2;
			count2--;
		}
		cout<<endl;
	}
}