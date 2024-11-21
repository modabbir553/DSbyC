#include <stdio.h>

int main() {
    int n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    for(int i =0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    printf("Sorted array: \n");
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}