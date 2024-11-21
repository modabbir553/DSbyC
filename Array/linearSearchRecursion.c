#include <stdio.h>
#include"array_f1.h"

int recursiveLinearSearch(int arr[], int ub, int v) {
    if (arr[ub] == v) {
        return ub;
    }
    return recursiveLinearSearch(arr, ub-1, v);
}

int main() {
    int lb,ub;
    int arr[100];
    printf("Enter the lower bound and upper bound of the array:\n");
    scanf("%d %d",&lb,&ub);
    inputArry(arr,lb,ub);
    printArry(arr,lb,ub);
    int v;
    printf("Enter the value you want to find: ");
    scanf("%d",&v);

    int result = recursiveLinearSearch(arr, ub, v);
    
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}
