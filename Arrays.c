#include <stdio.h>

int main(){

    int arr[50];
    int n;
    int key;
    int loc;
    // printf("Enter array elements: ");
    // for(int i=0; i<5; i++){
    //      printf("Enter array elements: \n");
    //     scanf("%d", &arr[i]);
    // }
    // printf("\nThe  array elements you entered are: ");
    // for(int i=0; i<5;i++){
    //     printf("%d", arr[i]);
    // }
    printf("Enter the size of the array:");
    scanf("%d", &n);
    printf("Enter %d array elements: \n", n);
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("The %d array elements you entered are : ", n);
    for(int i=0; i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    int smallest = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("\n");
    printf("The largest numbers in the array is %d", smallest);
    printf("\n");
    printf("Enter the element you want to insert:");
    scanf("%d", &key);
     printf("\n");
     printf("Enter the location into which you want to insert %d: ", key);
    scanf("%d", &loc);
     printf("\n");
    printf("The element you want to insert is %d and you want to insert it at %dnd location", key, loc);
    for(int i=(n-1); i>=loc; i--){
        arr[i+1] = arr[i]; 
    }
    arr[loc] = key;
     printf("\n");
     printf("You have inserted %d in to the %d  size array elements at location %d ", key,n, loc);
     printf("\n");
    printf("The new array elements you entered are : ", n);
    for(int i=0; i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}