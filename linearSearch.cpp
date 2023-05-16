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

void LinearSearch(struct Array *arr, int key){
    for(int i=0;i<arr->size;i++){
        if(arr->a[i]==key){
            cout<<"the number is in index: "<<i<<endl;
            return;
        }
    }
    cout<<"the number is not available in the array"<<endl;
    
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
    LinearSearch(&arr1,key);

    return 0;

}