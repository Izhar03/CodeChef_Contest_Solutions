#include<iostream>

using namespace std;

int main(){

  int T;

  cin>>T;

  int sum[T];

  int X,Y;

 for (int i=0;i<T;i++){

   cin>>X>>Y;
   sum[i]=X*10+Y*90;

 }

 for(int i=0;i<T;i++){

   cout<<sum[i]<<endl;

 }


}