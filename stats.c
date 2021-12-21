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
 * @file stats.c 
 * @brief calculation of array
 *
 * <Add Extended Description Here>
 *
 * @author Roshan Kattel
 * @date 12/20/2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
        	                      114, 88,   45,  76, 123,  87,  25,  23,
                	              200, 122, 150, 90,   92,  87, 177, 244,
                        	      201,   6,  12,  60,   8,   2,   5,  67,
                                	7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
	unsigned char mean, median, min,max;
  /* Statistics and Printing Functions Go Here */
	print_array(test,SIZE);

	median = find_median(test,SIZE);
	mean = find_mean(test,SIZE);
	max = find_max(test,SIZE);
	min = find_min(test,SIZE);

	print_statistics(median, mean, max, min);
	sort_array(test,SIZE);
}

/* Add other Implementation File Code Here */

void print_array(unsigned char arr[],int size)
{
	printf("The array is given below:\n");
	for (int i = 0; i< size; i++)
	{
		printf("The index %d is = %u \n", i, arr[i]);
	}
}

void print_statistics(unsigned char median,unsigned char mean, unsigned char max,unsigned char  min)
{
	printf("\nThe statistics are as below:\n");
	printf("The mean is = %u\n",mean);
	printf("The median is = %u\n", median);
	printf("The maximum value is = %u\n", max);
	printf("The minimum value is =%u\n",min);
}

unsigned char find_max(unsigned char arr[], int size)
{
	unsigned char max = arr[0];
	for (int i =0; i < size; i++)
	{
		if((int)max < ((int)arr[i]))
		{
			max=arr[i];
		}
	}
	return max;
}

unsigned char find_min(unsigned char arr[], int size)
{
	unsigned char min = arr[0];
	for(int i=0; i<size; i++)
	{
		if((int)min>((int)arr[i]))
		{
			min =arr[i];
		}
	}
	return min;
}

void sort_array(unsigned char arr[], int size)
{
	unsigned char a;
	for (int i=0; i<size; ++i)
	{
		for(int j=i+1; j<size; ++j)
		{
			if((int)arr[i]>(int)arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("\n Sorted array \n");
	print_array(arr,size);
}

unsigned char find_median(unsigned char arr[], int size)
{
	unsigned char median;
	int n;
	if(size%2 ==0)
	{
		n = size/2;
		median = (arr[n] + arr[n+1])/2;
	}
	else
	{
		n=(size+1)/2;
		median = arr[n];
	}
	return median;
}

unsigned char find_mean(unsigned char arr[], int size)
{
	int sum = 0;
	for (int i = 0; i< size; i++)
	{
		sum =sum + (int)arr[i];
	}
	return (unsigned char)(sum/size);
}
