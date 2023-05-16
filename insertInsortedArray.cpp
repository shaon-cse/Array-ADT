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

bool checkSorted(struct Array arr){
    for(int i=0;i<arr.length-1;i++){
        if(arr.a[i] > arr.a[i+1]){
            
            return false;
        }
    }
    return true;
    
}


void insert(struct Array *arr,int num){
    for(int i=arr->length-1;i>=0;i--){
        if(arr->a[i]>num){
            arr->a[i+1]=arr->a[i];
        }
        else{
            arr->a[i+1]=num;
            arr->length++;
            return;
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
    cout<<"Checking the array is sorted or not"<<endl;
    
    if(checkSorted(arr)==false){
        cout<<"Array is not sorted, you cant insert number"<<endl;
        return 0;
    }
    else{
    cout<<"Length before inserting is "<<arr.length<<endl;
    int num;
    cout<<"enter the number you want to insert: ";
    cin>>num;
    insert(&arr,num);
    display(&arr);
    cout<<"Length after inserting is "<<arr.length<<endl;

    }

    


}