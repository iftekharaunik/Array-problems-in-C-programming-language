#include <stdio.h>

int main (){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int i,j[n],arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
       j[i]=arr[i];
    }
    printf("Copy of array: \n");
      for(i=0;i<n;i++){

          printf("%d \n",j[i]);
    }
    

    return 0;
}