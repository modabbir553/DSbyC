#include <stdio.h>

int main() {
    int n,temp;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    
    int count =0;
    for(int i=0; i<n; i++){
        int min_idx = i;
        for(int j=i+1; j<n; j++){
            if(ar[j] < ar[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx !=i){
            temp=ar[min_idx];
            ar[min_idx]=ar[i];
            ar[i]=temp;
            count++;
        }
    }

    printf("\n%d\n", count);
    printf("Sorted array: \n");
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }

    return 0;
}