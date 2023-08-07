// Bubble Sort usign C Program

#include <stdio.h>
#include <stdlib.h>

void print_arr(int arr[],int size_of_arr) {
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void bubble_sort(int arr[],int size_of_arr) {
    
}
int main() {
    int size_of_arr; // Declaring a variable to store the length of array
    printf("Enter the size of array: ");
    scanf("%d",&size_of_arr);

    // Allocation the exact amount of memory required to store the array elements
    int *arr_list = (int *) malloc(size_of_arr*sizeof(int));

    for (int i = 0; i < size_of_arr; i++)
    {
        scanf("%d",&arr_list[i]);
    }

    print_arr(arr_list,size_of_arr);   
    return 0;
}