#include <stdio.h>

int main() {
    int n, i, pos;
    int arr [] = {2, 4, 6, 8, 10, 12, 14};
    int min = arr[0];
    pos = 0;

    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
            pos = i;
        }
    }

    printf("The smallest number is %d at position %d\n", min, pos);

}
