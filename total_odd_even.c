#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int i,j=0,k=0,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            j++;
        }
        else
        k++;
    }
    printf("total odd number: %d\n",k);
    printf("Total even number: %d",j);
    return 0;
}