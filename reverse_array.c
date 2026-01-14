#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i;
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output array: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}