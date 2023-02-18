// 12345
//  2345
//   345
//    45
//     5

#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0;i<n;i++){
		int count=i+1;
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=0;k<n-i;k++){
			cout<<count;
			count++;
		}
		cout<<endl;
	}
}