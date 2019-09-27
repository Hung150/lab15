#include<iostream>
using namespace std;
int LastOddNumber(int a[], int n)
{
	for(int i=n;i>=1;i--){
		if(a[i]%2==1){
			return a[i];
			break;
		}
	}
	return 0;
}
main(){
	int a[1000],n,i;
    cout<<"enter the size of the array n(n>=1): "; cin>>n;
    for(i=1;i<=n;i++){
    	cout<<"enter value a"<<i<<" "; cin>>a[i];
	}
	if(n<1){ cout<<"error(please enter n>=1)";
	}else{
	if(LastOddNumber(a,n)==0){ cout<<a[i]<<" ";
	}else{
		for(i=1;i<=n;i++){
			a[i]=LastOddNumber(a,n);
			cout<<a[i]<<" ";
		}
	}
    }
}


