#include<iostream>
using namespace std;
main(){
	double a[1000],b[1000],t;
	int n,i;
	cout<<"enter  the size of the array n(n>=1): "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter value a"<<i<<" "; cin>>a[i];
		cout<<"enter value b"<<i<<" "; cin>>b[i];
	}
	cout<<"before swaping:\n";
	cout<<"the array a:\n";
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<"the array b:\n";
	for(i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	cout<<"after swaping:\n";
	cout<<"the array a:\n";
	for(i=1;i<=n;i++){
		t=a[i];
		a[i]=b[i];
		b[i]=t;
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout<<"the array b:\n";
	for(i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
}
