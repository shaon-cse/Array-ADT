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

void addOrAppeand(struct Array *arr,int num){
    arr->a[arr->length]=num;
    arr->length++;

}

void insert(struct Array *arr,int index, int num){
    if(index>=arr->size){
        cout<<"Error! index size is greater than array size"<<endl;

    }
    else{
        for(int i=arr->length;i>index;i--){
            arr->a[i]=arr->a[i-1];

        }
        arr->a[index]=num;
        arr->length++;
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

    int num;
    cout<<"New number: ";
    cin>>num;
    cout<<"Array after appending"<<endl;
    addOrAppeand(&arr1,num);
    display(&arr1);

    int index,num2;
    cout<<"Index number: ";
    cin>>index;
    cout<<"new number: ";
    cin>>num2;
    cout<<"Array after inserting new number"<<endl;
    insert(&arr1,index,num2);
    display(&arr1);

    
    return 0;

}