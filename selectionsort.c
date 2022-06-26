#include<stdio.h>
#include<stdlib.h>


void swap(int *xp,int *yp){
    int temp=*xp;
        *xp=*yp;
        *yp=temp;
}

void selectionsort(int arr[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_idx])
            min_idx=j;
        swap(&arr[min_idx],&arr[i]);
    }
}
void printArray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    printf("\n");
    }
}
int main(){
    int n;
    scanf("\n%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printArray(arr,n);

    return 0;
}
