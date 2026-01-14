#include <stdio.h>

int main (){
    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int a[n],max1,max2,i;
     for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max1=a[0],max2=a[0];
    for(i=0;i<n;i++){
        if(a[i]>max1)
        max1=a[i];
    }
     for(i=0;i<n;i++){
        if(a[i]!=max1 && a[i]>max2)
        max2=a[i];
    }
    printf("maximum value: %d\n",max1);
    printf(" 2nd maximum value: %d",max2);
    return 0;
}