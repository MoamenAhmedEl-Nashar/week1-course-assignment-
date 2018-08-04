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
 * @file stats.c>
 * @brief 
 *
 * 
 *
 * @author Momen Ahmed
 * @date 4Aug18
 *
 */

#include "stdio.h"
#include"stats.h"
/* Size of the Data Set */
#define SIZE (40)
void sort_array(unsigned char array[], int length)
{
    //bubble sort used without stop optimization
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(array[j]<array[j+1])
            {
                unsigned char temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

unsigned char find_maximum(unsigned char array[], int length)
{
    unsigned char max =array[0];
    for(int i=1;i<length;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char array[], int length)
{
    unsigned char min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int find_mean(unsigned char array[], int length)
{
    int sum=0;
    for (int i=0;i<length;i++)
    
        sum+=array[i];
    
    
    return sum/length;
}




unsigned char find_median(unsigned char array[], int length)
{
    return array[(length/2)+1];
}

void print_array(unsigned char array[], int length)
{
    for(int i=0;i<length;i++)
    {
        printf("%d\n",array[i]);
    }
}

void print_statistics(unsigned char array[], int length)
{
    printf("the minimum of the array is %d \n the maximum of the array is %d \n the mean of the array is %d \n the median of the array is %d \n ",find_minimum(array,length),find_maximum(array,length),find_mean(array,length),find_median(array,length));
}

void main()
{

    unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                                114, 88, 45, 76, 123, 87, 25, 23,
                                200, 122, 150, 90, 92, 87, 177, 244,
                                201, 6, 12, 60, 8, 2, 5, 67,
                                7, 87, 250, 230, 99, 3, 100, 90};

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_statistics(test,SIZE);
    print_array(test,SIZE);
}