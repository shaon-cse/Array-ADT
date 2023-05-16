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
/* 
void addOrAppeand(struct Array *arr,int num){
    arr->a[arr->length]=num;
    arr->length++;

}
*/




/*
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
*/
void Delete(struct Array *arr,int index){
    int x=arr->a[index];
    cout<<"Deleted number: "<<x<<endl;
    for(int i=index;i<arr->length-1;i++){
        arr->a[i]=arr->a[i+1];
    }
    arr->length--;
    cout<<"length after deleting: "<<arr->length<<endl;


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

    int index;
    cout<<"Deleting index: ";
    cin>>index;
    Delete(&arr1,index);
    cout<<"Array after deleting"<<endl;
    display(&arr1);

    
    return 0;

}