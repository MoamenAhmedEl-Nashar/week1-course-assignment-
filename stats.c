#include "stdio.h"
#include"stats.h"
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


unsigned char find_mean(unsigned char array[], int length)
{
    unsigned char sum=0;
    for (int i=0;i<length;i++)
    {
        sum+=array[i];
    }
    return sum/length;
}




unsigned char find_median(unsigned char array[], int length)
{
    return array[length/2];
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

int main()
{
    unsigned char test_array[10]={5,2,5,77,2,0,1,63,9,1};
    //sort_array(test_array,10);
    //print_array(test_array,10);
    print_statistics(test_array,10);
    return 0;
}