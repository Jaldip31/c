#include<stdio.h>
int main(){

    int* arr[100] = {"hello","world"};
    for(int i=0;i<2;i++){
        printf("\n%s",arr[i]);
    }
}

/*
hello
world
*/