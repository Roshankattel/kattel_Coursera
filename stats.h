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
 * @file  stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Roshan Kattel
 * @date  12/20/2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief display mean, median, max, min
 *
 * <Add Extended Description Here>
 *
 * @param mean 	mean value
 * @param median median value
 * @param max	maximum value
 * @param min	minimum value
 *
 * @return  none
 */
void print_statistics(unsigned char mean, unsigned char median, unsigned char max, unsigned char min);


/**
 * @brief display elements in array
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return  none
 */
void print_array(unsigned char arr[], int size);

/**
 * @brief find median value of  array elements
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return median
 */
unsigned char find_median(unsigned char arr[], int size);

/**
 * @brief find mean value of  array elements
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return mean
 */
unsigned char find_mean(unsigned char arr[], int size);

/**
 * @brief find minimum value of  array elements
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return minimum
 */
unsigned char find_min(unsigned char arr[], int size);

/**
 * @brief find maximum value of  array elements
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return maximum
 */
unsigned char find_max(unsigned char arr[], int size);

/**
 * @brief sort the array from largest to smallest
 *
 * <Add Extended Description Here>
 *
 * @param arr arry for calculation
 * @param size size of arr
 *
 * @return none
 */
void sort_array(unsigned char arr[], int size);


#endif /* __STATS_H__ */
