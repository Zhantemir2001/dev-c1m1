/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

// C function to find maximum in arr[] of size n
int find_maximum(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}
int find_minimum(int arr[], int n)
{
    int min=1000000000;
    for (int i = 0; i < n; i++){
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int find_mean(int arr[], int n){
    int mean=0;
    int sum=0;
    for(int i=0; i<n;i++){
        sum=sum+arr[i];
    }
    mean=sum/SIZE;
    return mean;
}
// function to sort the array in ascending order
void Array_sort(int *arr , int n)
{ 
    // declare some local variables
    int i=0 , j=0 , temp=0;
    for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (arr[i] < arr[j]) 
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
}
void print_array(int arr[], int n){
    printf("\nThe array after sorting is..\n");
    for(int i=0 ; i<n ; i++)
    {
        printf("\narray_1[%d] : %d",i,arr[i]);
    }
}
int Find_median(int arr[] , int n)
{
    int median=0;
    // if number of elements are even
    if(n%2 == 0)
        median = (arr[(n-1)/2] + arr[n/2])/2.0;
    // if number of elements are odd
    else
        median = arr[n/2];
}
void print_statistics(int arr[],int n){
    printf("Max in given array is %d", find_maximum(arr, n));
    putchar('\n');
    printf("Min in given array is %d", find_minimum(arr, n));
    putchar('\n');
    printf("Mean of given array is %d", find_mean(arr, n));
    Array_sort(arr , n);
    putchar('\n');
   printf("Median of given array is %d", Find_median(arr, n)); 
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
   int arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i]=test[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    print_statistics(arr,n);
    print_array(arr,n);

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
