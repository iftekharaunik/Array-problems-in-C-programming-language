#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i;
    printf("Enter the value of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0)
        printf("positive:%d \n",arr[i]);
        else 
        printf("negative:%d \n",arr[i]);
    }
    return 0;
}