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


void Reverse(struct Array *arr){
    int *arr2;
    arr2= new int[arr->length];

    int i,j;

    for(i=arr->length-1,j=0;i>=0;i--,j++)
        arr2[j]=arr->a[i];
    for(i=0;i<arr->length;i++)
        arr->a[i]=arr2[i];

    delete []arr2;

    
}

void reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--){
        int temp=arr->a[i];
        arr->a[i]=arr->a[j];
        arr->a[j]=temp;
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

    Reverse(&arr1);
    display(&arr1);

    reverse2(&arr1);
    display(&arr1);


}