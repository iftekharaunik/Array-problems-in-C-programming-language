#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,max,min;
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0]; min=arr[0];
    
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[min];
        }
    }
    printf("minimum value:%d \n",min);
    printf("maximum value:%d \n",max);
    return 0;
}