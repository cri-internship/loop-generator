#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(980, "random");
	float **B = create_two_dim_float(510, 770, "random");

	for (int d = 1; d < 976; d++)
	  for (int c = 1; c < 976; c++)
	    for (int b = 1; b < 976; b++)
	      for (int a = 1; a < 976; a++)
	      {
	        
	       A[a]=A[a-1]+0.04;
	        
	       A[a]=A[a+1]+B[a][b];
	        
	       A[a]=A[a+4]*B[a][b];
	      }

    return 0;
}