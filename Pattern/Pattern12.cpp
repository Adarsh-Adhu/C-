// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I

#include<iostream>
using namespace std;
int main(){
	int n=5;
	char ch='A';
	
	for(int i=0;i<n;i++){
		ch = 'A'+i;	
		for(int j=0;j<n;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}

}