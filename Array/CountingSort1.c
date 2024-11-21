#include <stdio.h>

int max(int ar[],int n){
    int max = ar[0];
    for(int i=1; i<n; i++){
        if(max < ar[i]){ 
            max = ar[i];
        }
    }
    return max;
}

void countShort(int ar[],int max, int n){
    int count [max+1];
    int ar1[n];

    //Initialize count with 0 
    for (int i = 0; i <= max; i++) {
        count[i] = 0;
    }

    // Store the count of each element
    for(int i =0; i<n; i++){
        count[ar[i]]++;
    }

    //Cumulative counts(count update)
    for(int i = 1; i<=max; i++){
        count[i] = count[i] + count[i-1];
    }

    //Sort the values in ar1
    for(int i = n-1; i>=0; i--){
        ar1[--count[ar[i]]] = ar[i];
    }

    //Copy the values from ar1 to ar
    for(int i = 0; i<n; i++){
        ar[i] = ar1[i];
    }

    printf("Sorted Array: ");
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
}

int main() {
    int ar[] = {4,1,5,2,2,3,0};
    int n = sizeof(ar)/sizeof(ar[0]);
    int m = max(ar,n);
    countShort(ar,m,n);
    return 0;
}