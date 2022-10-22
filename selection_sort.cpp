#import <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of elements:";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
    }
  for(int i=0;i<n;i++){
    int max=i;
    for(int j=i+1;j<n;j++){
      if(arr[max]<arr[j]){
        max=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[max];
    arr[max]=temp;
  }
  cout<<"The sorted array is:";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
  }
}
