//    1
//   23
//  456
// 78910

#include<iostream>
using namespace std;
int main(){
	int n=4;
	int count=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<count;
			count++;
		}
		cout<<endl;
	}
}