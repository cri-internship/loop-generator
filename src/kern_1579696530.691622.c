#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(20, "random");
	double *A = create_one_dim_double(60, "random");
	double ***C = create_three_dim_double(740, 150, 780, "random");

	for (int d = 0; d < 20; d++)
	  for (int c = 0; c < 20; c++)
	    for (int b = 0; b < 20; b++)
	      for (int a = 0; a < 20; a++)
	      {
	        
	       A[a]=0.777;
	       A[a+5]=0.928;
	        
	       B[a]=0.066;
	       B[a]=0.119;
	      }

    return 0;
}