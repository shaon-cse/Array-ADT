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
/*
struct Array* Union(struct Array *arr1,struct Array *arr2)
{
 int i,j,k;
 i=j=k=0;

struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));

while(i<arr1->length && j<arr2->length){
    if(arr1->A[i]<arr2->A[j])
        arr3->A[k++]=arr1->A[i++];
    else if(arr2->A[j]<arr1->A[i])
        arr3->A[k++]=arr2->A[j++];
    else{
        arr3->A[k++]=arr1->A[i++];
        j++;
    }
 }

 for(;i<arr1->length;i++)
    arr3->A[k++]=arr1->A[i];
 for(;j<arr2->length;j++)
    arr3->A[k++]=arr2->A[j];

 arr3->length=k;
 arr3->size=10;

 return arr3;
}

*/
struct Array* Intersection(struct Array *arr1,struct Array
*arr2)
{
 int i,j,k;
 i=j=k=0;

 struct Array *arr3=(struct Array *)malloc(sizeof(struct
Array));

 while(i<arr1->length && j<arr2->length)
 {
 if(arr1->A[i]<arr2->A[j])
 i++;
 else if(arr2->A[j]<arr1->A[i])
 j++;
 else if(arr1->A[i]==arr2->A[j])
 {
 arr3->A[k++]=arr1->A[i++];
 j++;
 }
 }

 arr3->length=k;
 arr3->size=10;

 return arr3;
}

int main(){
    struct Array arr1={{2,3,5,6,8,9},6,10};
    struct Array arr2={{4,5,7,8,9,10},6,10};

    struct Array *arr3;

    arr3=Intersection(&arr1, &arr2);
    display(*arr3);





}