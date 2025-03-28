#include <stdio.h>

int main(){

    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int new_arr[10];
    int n = 10;
    int x;

    for(int i = 0; i<10 ; i++){
        new_arr[n-1-i] = arr[i];
    }

    for(int f = 0; f < 10; f++){
        printf("%d\n", new_arr[f]);
    }
    return 0;
}
