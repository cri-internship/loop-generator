#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(790, "random");
	float **A = create_two_dim_float(810, 970, "random");

	for (int d = 0; d < 966; d++)
	  for (int c = 1; c < 787; c++)
	    for (int b = 1; b < 787; b++)
	      for (int a = 1; a < 787; a++)
	      {
	        
	       A[a][b]=A[a][b+1]+0.968;
	        
	       A[a][b]=A[a+2][b+4]/B[a];
	        
	       B[a]=0.423;
	       B[a+3]=0.048;
	        
	       B[a]=0.137;
	      }

    return 0;
}