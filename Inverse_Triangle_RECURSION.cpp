#include <iostream>
using namespace std;
void triangle(int n);
int main(){
  int x;
  cout<<"Enter max triangle row :";
  cin>>x;
  triangle(x);
}
void triangle(int n){
  if(n==1){
    cout<<"*";
  }
  else{
    int m=n;
    while(m>0){
      cout<<"*";
      m--;
    }
    cout<<endl;
    triangle(n-1);
  }
}
