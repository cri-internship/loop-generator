#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(650, 940, "ones");
	double *A = create_one_dim_double(60, "ones");

	for (int d = 4; d < 936; d++)
	  for (int c = 4; c < 60; c++)
	    for (int b = 4; b < 60; b++)
	      for (int a = 4; a < 60; a++)
	      {
	        
	       B[a][b]=B[a-1][b-2]-A[a];
	        
	       B[a][b]=B[a][b-4]-0.53;
	        
	       A[a]=0.403;
	       A[a-4]=0.049;
	        
	       B[a][b]=B[a][b]-0.403;
	       A[a]=B[a+4][b+4]+0.2;
	      }

    return 0;
}