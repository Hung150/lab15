#include<iostream>
using namespace std;
Max(double a[],double n)
{
	int max=a[1];
	for(int i=1;i<=n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
Min(double a[],double n)
{
	int min=a[1];
	for(int i=1;i<=n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
main(){
	double a[1000];
	int n,i;
	cout<<"enter the size of the array n(n>=1): "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter value a"<<i<<" "; cin>>a[i];
	}
	if(n<1){ cout<<"error";
	}else{
	cout<<Max(a,n)<<" ";
	for(i=1;i<=n;i++){
		if(a[i]!=Max(a,n)&&a[i]!=Min(a,n)){ cout<<a[i]<<" ";
		}
	}
	cout<<Min(a,n)<<" ";
    }
}
