#include<bits/stdc++.h>
using namespace std;

struct Array{
    int a[10];
    int size;
    int length;

};

void display(struct Array *arr){
    for(int i=0;i<arr->length;i++){
        cout<<arr->a[i]<<" ";
    }
    cout<<endl;

}

void binarySearch(struct Array *arr,int key){
    int low,high;
    low=0;
    high=arr->length-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr->a[mid]==key){
            cout<<mid;
            return;
        }
        else if(key<arr->a[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
}





int main(){
    struct Array arr1;

    cout<<"Enter the size of array: ";
    cin>>arr1.size;

    arr1.length=0;

    int n;
    cout<<"Number of digit in the array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr1.a[i];
    }

    arr1.length=n;

    display(&arr1);

    int key;
    cout<<"Enter number thats need to find: ";
    cin>>key;
    binarySearch(&arr1,key);

    return 0;

}