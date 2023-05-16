#include<bits/stdc++.h>

using namespace std;

struct Array{
    int A[10];
    int length;
    int size;

};

void display(struct Array arr){
    for(int i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }
}

void MissingNum(struct Array arr){
    int sum=0;
    for(int i=0;i<arr.length;i++){
        sum+=arr.A[i];
    }
    
    int n=arr.A[arr.length-1];
    int sum2=(n*(n+1))/2;
    if(sum!=sum2){
        cout<<"The missing element is "<<sum2-sum<<endl;
    }
}

void MissingMultipleNum(struct Array arr){
    int diff=arr.A[0]-0;
    for(int i=0;i<arr.length;i++){
        int diff2=arr.A[i]-i;
        if(diff!=diff2){
            while(diff<diff2){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}

void MissNumUnsort( struct Array *arr, int h){
    int arr2[h];
    for(int i=0;i<h;i++){
        arr2[i]=0;
    }
    for(int i=0;i<arr->length;i++){
        arr2[arr->A[i]]++;
    }
    for(int i=1;i<h;i++){
        if(arr2[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    struct Array arr1={{1,3,2,5,8,7,11},7,10};
    //MissingNum(arr1);
   // MissingMultipleNum(arr1);
   int h=11;
    MissNumUnsort(&arr1,h);
    cout<<endl;




}