// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include<iostream>
using namespace std;
int main(){
	int n=5;

	for(int i=1;i<=n;i++){
		int count=1;
		for(int j=1;j<=n-i+1;j++){
			cout<<count;
			count++;	
		}
		int count1=0;
		for(int k=1;k<count1+i;k++){
			cout<<"*";

		}
		for(int l=1;l<=i-1;l++){
			cout<<"*";
		}
		int count2=n-i+1;
		for(int m=1;m<=n-i+1;m++){
			cout<<count2;
			count2--;
		}
		cout<<endl;

	}
}