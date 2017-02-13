//----- sort_tester.cpp -----
#include <iostream>
#include <vector>
using namespace std;

/**
 * Title: Program 6 Submission : Insertion Sort
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2
 *
 * This is a driver program to test the insertion sort
 * CoolSort() function. The program reads a decreasing
 * sequence of numbers that end at 1. For each H, it
 * sorts the sub-arrays that start at arbitrary element(s)
 * and includes every Hth element using insertion sort.
 *
 * @author Mariya Eggensperger
*/

void PrintArray(int x[], int size);
void CoolSort(int x[], int size, int sequence[], int sequence_size);

int main() {

   return 0;
}
/*
 * Insertion sort algorithms that reads a decreasing
 * sequence of numbers that end at 1. For each H, it
 * sorts the sub-arrays that start at arbitrary element(s)
 * and includes every Hth element using insertion sort.
 *
 * @param int x[], int sequence[]
 * @return void return
 */

/*
 * General function that prints the elements
 * in the selection sort array.
 *
 * @param int x[]
 * @return int x[i]
 */
void PrintArray(int x[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      printf("%d ", x[i]);
   }
}

