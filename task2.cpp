#include<iostream>
using namespace std;
main(){
	double a[1000];
	int n,i,sum=0;
	cout<<"enter the size of the array n(n>=1):"; cin>>n;
	for(i=1;i<=n;i++){
	    cout<<"enter value a"<<i<<" "; cin>>a[i];
    } 
	if(n<1) cout<<"error(please enter n>=1)";
	else{
		for(i=1;i<=n;i++)
			sum+=a[i];
			a[i]=sum;
			cout<<a[i]/i<<" ";
		
	}
}
