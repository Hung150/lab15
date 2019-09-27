#include<iostream>
using namespace std;
main(){
	double a[1000];
	int n,i,c=0,j,t;
	cout<<"enter the size of the array n(n>=1): "; cin>>n;
	if(n<1){ cout<<"error(please enter n>=1)";
	}else{
		cout<<"enter the array(all elements of which,except the first,are ordered in ascending order)";
		cout<<"\n";
		for(i=1;i<=n;i++){
			cout<<"enter value a"<<i<<" "; cin>>a[i];
		}
		for(i=2;i<=n-1;i++){
			if(a[i]>a[i+1]){
				c++;
			}
		}
		if(c>=1){ cout<<"error(all elements of which,except the first,are ordered in ascending order)";
		}else{
			for(i=1;i<=n;i++){
				for(j=i+1;j<=n;j++){
				if(a[i]>a[j]){
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}
			    }
				cout<<a[i]<<" ";
			}
		}
	}
}

