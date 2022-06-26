// Online C++ compiler to run C++ program online
#include<stdio.h>
#include<stdlib.h>

void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    
    int L[n1],R[n2];
    
    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
        }
        else{
        arr[k]=R[j];
        j++;
        }
        k++;
    }
    while(i < n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

void printArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
}
int main() {
    int size_arr;
    scanf("\n%d",&size_arr);
    int i,arr[size_arr];
    for(i=0;i<size_arr;i++){
        scanf("\n%d",&arr[i]);
    }
    mergesort(arr,0,size_arr-1);
    printArray(arr,size_arr);

    return 0;
}
