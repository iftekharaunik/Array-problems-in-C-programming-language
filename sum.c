#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n],i,sum=0;
     printf("Enter %d elements in the array : ", n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("sum of array: ");
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d ",sum);
    return 0;
}