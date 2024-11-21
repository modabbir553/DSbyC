#include <stdio.h>
#include"array_f1.h"

int main() {
    int lb,ub;
    int arr[100];
    printf("Enter the lower bound and upper bound of the array:\n");
    scanf("%d %d",&lb,&ub);
    inputArry(arr,lb,ub);
    printArry(arr,lb,ub);

    int temp;
    for(int i=lb; i<ub; i++){
        for(int j=lb; j<ub-i; j++){
            if (arr[j]>arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }

    for(int i=lb; i<=ub; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int v;
    printf("Enter the value you want to find:");
    scanf("%d",&v);

    int left, right, mid;
    left = lb;
    right = ub;
    while (left<=right){
        mid = (left+right)/2;
        if (arr[mid] == v){
            printf("%d is found at index: %d",arr[mid],mid);
            break;
        }
        else if (arr[mid] < v){
            left = mid+1;
        }
        else if (arr[mid] > v){
            right = mid-1;
        }
    }

    if (arr[mid]!=v){
    printf("The value is not found.");}

    return 0;
}