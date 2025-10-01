#include <iostream>
#include "utilities.h"


float largestValueIn1DArray(float * arr, int size) {
	float high = *arr;
	for (int i = 0; i < size; ++i) {
		if (high < arr[i]){
			high = arr[i];
		}	
	}
	return high;
}

float largestValueIn2DArray(float ** arr, int size_x, int size_y) {
	float high = arr[0][0];
	for (int i = 0; i < size_x; ++i ) {
		for (int j = 0; j < size_y; j++) {
			if (high < arr[i][j]) {
				high = arr[i][j];
			}
		}
	}

	return high;
}

float* largestAddressIn1DArray(float * arr, int size)  {
	float* high = &arr[0];
	for (int i = 0; i < size; ++i) {
		if (high < &arr[i]) {
			high = &arr[i];
		}
	} 
	return high;
}

float* largestAddressIn2DArray(float ** arr, int size_x, int size_y) {
	float* high = &arr[0][0];
	for (int i = 0; i < size_x; ++i ) {
		for (int j = 0; j < size_y; j++) {
			if (high < &arr[i][j]) {
				high = &arr[i][j];
			}
		}
	}
	return high;
}

void largestValAddrIn2DArray(float ** arr, int size_x, int size_y, float& value, float *& addr) ;

int main() {
   srand(42) ;
   int width = 10 ;
   float * arr_1D = new float[width] ;
   
   for(int i = 0; i < width; ++i) {
      arr_1D[i] = (float) rand()/RAND_MAX ;
      std::cout << arr_1D[i] << std::endl ;
   }
   
   return 0 ;  
}

// YOUR CODE HERE
