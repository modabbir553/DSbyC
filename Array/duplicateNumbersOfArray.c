#include <stdio.h>

int count=0;


int Duplicate(int duplicate[], int a){
    
    for(int j =0; j<=count; j++){
        if(duplicate[j] == a){
            return 0;
        }
    }
    duplicate[count] = a;
    count++;
}

int main() {
    int n, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];
    int dup[100];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        
        for (j = 0; j < n; j++) {
            if (i==j ) break;
            else if (arr[i] == arr[j]) {
                Duplicate(dup,arr[j]);
                break;
            }
        }
    }

    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
