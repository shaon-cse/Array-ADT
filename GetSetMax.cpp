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

void Get(struct Array *arr,int index){
    if(index>=0 && index<arr->length){
        cout<<"The number is: "<<arr->a[index]<<endl;
    }
    else
        cout<<"index number is greater than array length"<<endl;

}

void Set(struct Array *arr,int index,int num){
    if(index>=0 && index<arr->length){
        arr->a[index]=num;
    }
    else
        cout<<"index number is greater than array length"<<endl;
}

int Max(struct Array *arr){
    int max=0;
    for(int i=0;i<arr->length;i++){
        if(arr->a[i]>max){
            max=arr->a[i];
        }
    }

    return max;

}

int Min(struct Array *arr){
    int min=0;
    for(int i=0;i<arr->length;i++){
        if(arr->a[i]<min){
            min=arr->a[i];
        }
    }

    return min;

}

int sumofArr(struct Array *arr){
    int sum=0;
     for(int i=0;i<arr->length;i++){
        sum+=arr->a[i];
    }

    return sum;

}

double Avg(struct Array *arr){
    int sum=0;
     for(int i=0;i<arr->length;i++){
        sum+=arr->a[i];
    }

    return (sum/arr->length);

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
    cout<<"Enter the index number which you want: ";
    cin>>index;
    Get(&arr1,index);

    int index2,num;
    cout<<"Enter the index where to put new number: ";
    cin>>index2;
    cout<<"Enter the new number: ";
    cin>>num;
    Set(&arr1,index2,num);
    display(&arr1);

    cout<<"Max number in the array: "<<Max(&arr1)<<endl;
    cout<<"Minimum number in the array: "<<Min(&arr1)<<endl;
    cout<<"Sum of the array: "<<sumofArr(&arr1)<<endl;
    cout<<"Average of the array: "<<Avg(&arr1)<<endl;
    return 0;

}