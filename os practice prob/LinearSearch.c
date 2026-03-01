#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 45, 50, 60, 70, 80, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key, i, found = 0;

    printf("Enter the number that has to be searched: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Number found\n");
    else
        printf("Number not found\n");

    return 0;
}
