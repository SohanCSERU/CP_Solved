#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l,a,m,n,N,T;
	cin>>N;

	for(i=0;i<=N;i++){cout<<" ";
		for(k=N-i;k>0;k--){
			cout<<" "<<" ";
		}
		   for(j=0;j<i+1;j++){
	          cout<<j<<" "; 
	           if(j==i){l=j;
		    		while(l--){
		    			if(l==0){
						  cout<<l;break;
						  }
		    			cout<<l<<" ";
				   }
	         	}
	       }
		cout<<endl;
	}
	for(i=0;i<N;i++){cout<<" ";
			for(k=0;k<=i;k++){
				cout<<" "<<" ";
			}
			 for(j=0;j<N-i;j++){
			 	cout<<j<<" ";
			 	 if(j == (N-i-1)){
			 	 	l=N-i-1;
			 	 	while(l--){
			 	 		if(l==0){
						  cout<<l;break;
						  }
			 	 		cout<<l<<" ";
					  }
				  }
			 }
			cout<<endl;
		}
	
	
	return 0;
}
