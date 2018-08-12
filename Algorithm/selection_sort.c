#include <stdio.h>

void swap(int *first_index,int *second_index){
    int temp = *first_index;
    *first_index = *second_index;
    *second_index = temp;
}


void selection_sort(int arr[], int arr_length){

int i,j, min_index;
for(i=0; i<arr_length-1; i++){
    min_index = i;
    for(j=i+1; j<arr_length; j++){
        if(arr[j] < arr[min_index]){
            min_index = j;
        }
    }

    swap(&arr[min_index], &arr[i]);
}

}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[]={64,25,12,22,11};
    int arr_length = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, arr_length);
    printf("Sorted array: \n");
    printArray(arr, arr_length);
}
