#include<bits/stdc++.h>
using namespace std;

struct Array{
    int *a;
    int size;
    int length;

};

void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.a[i]<<" ";
    }
    cout<<endl;

}

int main(){
    struct Array arr1;
    cout<<"Enter the size of array: ";
    cin>>arr1.size;
    arr1.a= new int[arr1.size];
    arr1.length=0;

    int n;
    cout<<"Number of digit in the array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr1.a[i];
    }
    arr1.length=n;
    display(arr1);

    return 0;

}