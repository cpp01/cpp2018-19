#include<iostream>
using namespace std;
dec(int a){
	if(a>0){
		dec(a/2);
		cout<<a%2;
	}
}
int main(){
	int n;
	cin>>n;
	dec(n);
	return 0;
}