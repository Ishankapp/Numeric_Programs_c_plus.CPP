#import <iostream>
using namespace std;
int gcd(int m,int n);
int main(){
  int x,y;
  cout<<"Enter the value of m:";
  cin>>x;
  cout<<"Enter the value of n:";
  cin>>y;
  cout<<"The GCD is:"<<gcd(x,y);
}
int gcd(int m,int n){
  if(m==n){
    return m;
  }
  else if(m<n){
    return gcd(n,m-n);
  }
  else if(m<n){
    return gcd(n,m);
  }
}
