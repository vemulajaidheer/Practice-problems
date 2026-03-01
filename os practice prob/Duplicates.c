#include <stdio.h>

int main(){
int arr[] = {1,2,3,4,1,5,6};
int size = sizeof(arr)/sizeof(arr[0]);
int flag = 0;
for(int i = 0 ; i<size ; i++){
int num = arr[i];
for(int j = i + 1; j<size ; j++){
    if(arr[i] == arr[j]){
        flag = 1;
        break;
    }
}
}
if(flag == 1){
    printf("There is a duplicate number");
}
else{
    printf("There is no duplicate");
}
}
