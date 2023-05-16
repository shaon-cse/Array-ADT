#include<bits/stdc++.h>
using namespace std;

struct Array{
    int a[10];
    int length;
    int size;
};

void Duplicate(struct Array arr){
    int lastdup=0;
    for(int i=0;i<arr.length-1;i++){
        if(arr.a[i]==arr.a[i+1] && lastdup!=arr.a[i+1]){
            
        int j=i+1;
        while(arr.a[j]==arr.a[i]){
            j++;
        }
                
        cout<<"Array "<<arr.a[i]<<" appearing "<<j-i<<" times"<<endl;
        i=j-1;
            
        }
    }

}

void duplicate2(struct Array arr){
    int h=5;
    int arr2[h];
    for(int i=0;i<h;i++){
        arr2[i]=0;

    }
    for(int i=0;i<arr.length;i++){
        arr2[arr.a[i]]++;
    }
    for(int i=0;i<h;i++){
        if(arr2[i]>1){
            cout<<"Array "<<i<<" appearing "<<arr2[i]<<" times"<<endl;
        }
        
    }

}

void DuplicateForUnsorted(struct Array arr){
    for(int i=0;i<arr.length;i++){
        if(arr.a[i]!=-1){
            int count=1;
            for(int j=i+1;j<arr.length;j++){
                if(arr.a[i]==arr.a[j]){
                    arr.a[j]=-1;
                    count++;
                }
            }
            if(count>1){
                cout<<"Array "<<arr.a[i]<<" appearing "<<count<<" times"<<endl;
            }
            
        }
    }
}



int main(){
    struct Array arr={{1,2,2,3,4,4,4,5},8,10};
    struct Array arr2={{1,4,3,4,9,9,3,3},8,10};
    Duplicate(arr);
    cout<<endl;
    duplicate2(arr);
    cout<<endl;
    DuplicateForUnsorted(arr2);

}