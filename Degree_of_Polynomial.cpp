#include<iostream>
#include<math.h>

using namespace std;

int main(){

  int T,N,degree=0;

  cin>>T;

  while(T--){

  cin>>N;

  for(int i=0;i<N;i++){

    int x;
    cin>>x;
    
    if(x==0)
    degree=degree+0;
    
    if(x!=0)
    degree=degree+i;
    
    
    

  }
  
  cout<<degree<<endl;
  degree=0;

  }
  
}