#include<iostream>
using namespace std;
int main(){
	
	int array[5],i;
	cout<<"\nEnter the numbers:\n";
	for(i=0;i<5;i++){
		cin>>array[i];
	}
	cout<<"\nYou entered:\n";
	for(i=0;i<5;i++){
		cout<<*(array+i)<<endl;
	}
	return 0;
}
