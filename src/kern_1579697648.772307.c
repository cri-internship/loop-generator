#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "random");
	double *B = create_one_dim_double(970, "random");

	for (int d = 3; d < 46; d++)
	  for (int c = 3; c < 46; c++)
	    for (int b = 3; b < 46; b++)
	      for (int a = 3; a < 46; a++)
	      {
	        
	       B[a]=B[a-3]-A[a];
	        
	       A[a]=A[a+4]*0.576;
	        
	       B[a]=B[a+1]-A[a];
	      }

    return 0;
}