#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");
	float ***C = create_three_dim_float(40, 150, 80, "random");
	float **B = create_two_dim_float(50, 50, "random");

	for (int e = 48; e < 48; e++)
	  for (int d = 0; d < 47; d++)
	    for (int c = 0; c < 47; c++)
	      for (int b = 0; b < 47; b++)
	        for (int a = 0; a < 47; a++)
	        {
	          
	        A[a+50]=A[a+48]/A[a+49]-0.757;
	          
	        B[a+3][b+2]=B[a+3][b-48]/0.078;
	        }

    return 0;
}