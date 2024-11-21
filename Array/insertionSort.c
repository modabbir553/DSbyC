#include <stdio.h>

int main() {
    int ar[100];
    int n,j,temp;
    printf("Enter the size of aray:");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int count =0;

    for (int i = 1; i < n; i++) {
        int v = ar[i];
        for(j=i-1; j >= 0 && ar[j] > v; j--) {
            ar[j + 1] = ar[j];
            count++;
        }
        ar[j + 1] = v;
    }

    printf("\n%d\n",count);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    return 0;
}
