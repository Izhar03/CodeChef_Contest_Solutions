#include<iostream>
#include<math.h>

using namespace std;

int main(){

  int T;

  cin>>T;
  
  int answer;
  int lmax,rmax;
  long long int N;

  int a,b,c,d;

  while(T--){
      
      cin>>N;
      cin>>a>>b>>c>>d;
      
      if((a+b+c+d)==N){

      lmax=max(a,b);
      rmax=max(c,d);
      answer=max(lmax,rmax);
      
      }
      
      cout<<answer<<endl;


    }


}