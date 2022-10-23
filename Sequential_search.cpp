#import <iostream>
using namespace std;
int main(){
  int n,element;
  int count=0;
  cout<<"Enter the number of elements:";
  cin>>n;
  int arr[n];
  cout<<"Enter array elements:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter a element which needs to be searched:";
  cin>>element;
  for(int i=0;i<n;i++){
    if(arr[i]==element){
      cout<<"The element is found at "<<i<<" position"<<endl;
      count++;
    }
  }
  if(count==0){
    cout<<"Element not found";
  }
}
