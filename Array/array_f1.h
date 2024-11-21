#include<stdio.h>
#include<stdlib.h>

void inputArry(int arr[], int lb, int ub)
{
    int i;
    for(i=lb;i<=ub;i++){
        arr[i]=(rand()%5)+1;
    }
}

void printArry(int arr[], int lb, int ub)
{
    for(int i=lb;i<=ub;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}