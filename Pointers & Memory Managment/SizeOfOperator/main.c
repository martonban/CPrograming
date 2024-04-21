#include <stdio.h>
#include <stdlib.h>

//  SizeOF return number of BYTES for a certain type
//
//
int main(int argc, char *argv[]){

    // Simple type
    int a;
    printf("Int size:%d\n", sizeof(a));

    // sizeof will return 'size_t' - 64bit unsigned int -> %llu / %d
    //---------------------------
    // sizeof is working with arrays
    // Array is a special thing because if we just use like arr it's going to be a int*
    // But the size of operation will know it's an array and that's why it will return the whole
    // array size in bytes
    int arr[3] = {3, 9, 10};
    printf("Array size:%d\n", sizeof(arr));

    // Simple pointer is not going to work like this
    int* arrp = arr;
    printf("Array pointer size:%d\n", sizeof(arrp));

    return 0;
}
