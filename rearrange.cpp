#include<bits/stdc++.h>
using namespace std;

struct Array{
    int a[10];
    int size=10;
    int length;

};

void display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        cout<<arr->a[i]<<" ";
    }
    cout<<endl;

}

void rearrange(struct Array *arr){
    int i=0,j=arr->length;
    while (i < j) {
    while (arr->a[i] < 0) {
      i++;
    }
    while (arr->a[j] >= 0) {
      j--;
    }
    if (i < j) {
      int temp = arr->a[i];
      arr->a[i] = arr->a[j];
      arr->a[j] = temp;
    }
  }
}





int main(){
    struct Array arr;
    int n;
    cout<<"Number of digit in the array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr.a[i];
    }
    arr.length=n;
    cout<<"Check"<<endl;
    rearrange(&arr);
    cout<<"Check"<<endl;
    display(&arr);
   

    


}