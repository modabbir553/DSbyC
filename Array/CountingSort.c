#include <stdio.h>

int max(int lb, int ub, int ar[]){
    int max = ar[lb];
    for(int i=1; i<=ub; i++){
        if(max < ar[i]){ 
            max = ar[i];
        }
    }
    return max;
}

int main() {
    int ar[100];
    int lb, ub;

    // Input lower and upper bounds
    printf("Enter the lower bound and upper bound:\n");
    scanf("%d", &lb);
    scanf("%d", &ub);

    // Input array elements within the bounds
    printf("Enter the array elements:\n");
    for (int i = lb; i <= ub; i++) {
        scanf("%d", &ar[i]);
    }

    // Display the input array elements
    printf("Input array: ");
    for (int i = lb; i <= ub; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");



    // Find the maximum element in the array
    int m = max(lb, ub, ar);
    
    // Initialize counting array with zeros
    int c[m];
    for (int i = 0; i <= m; i++) {
        c[i] = 0;
    }

    // Count occurrences of each element
    for (int i = lb; i <= ub; i++) {
        c[ar[i]] += 1;
    }

    // Accumulate the counts to get the positions
    for (int i = 1; i <= m; i++) {
        c[i] += c[i - 1];
    }
    

    // Sorting the array using the counting array
    int b[ub - lb + 1];  // Create an array of size equal to the input range
    for (int i = ub; i >= lb; i--) {
        b[c[ar[i]] - 1] = ar[i];
        c[ar[i]] -= 1;
    }

    // Display the sorted array
    printf("Sorted array: ");
    for (int i = 0; i <= ub - lb; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}
