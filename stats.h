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


/**
 * @brief this function is used to sort an array from large to small
 * 
 * @param an unsigned char pointer and length of the array
 * @return void
 */
void sort_array(unsigned char array[], int length);
/**
 * @brief this function is used to find the maximum value in array 
 * 
 * @param an unsigned char pointer and length of the array
 * @return unsigned char
 */
unsigned char find_maximum(unsigned char array[], int length);
/**
 * @brief this function is used to find the minimum value in array 
 * 
 * @param an unsigned char pointer and length of the array
 * @return unsigned char
 */
unsigned char find_minimum(unsigned char array[], int length);
/**
 * @brief this function is used to find the mean value in array 
 * 
 * @param an unsigned char pointer and length of the array
 * @return unsigned char
 */
int find_mean(unsigned char array[], int length);
/**
 * @brief this function is used to find the median value in array 
 * 
 * @param an unsigned char pointer and length of the array
 * @return int
 */
unsigned char find_median(unsigned char array[], int length);
/**
 * @brief this function is used to print an array of unsigned char type
 * 
 * @param an unsigned char pointer and length of the array
 * @return void
 */
void print_array(unsigned char array[], int length);
/**
 * @brief this function is used to print some statistics
 * 
 * @param an unsigned char pointer and length of the array
 * @return void
 */
void print_statistics(unsigned char array[], int length);
