#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(700, "zeros");
	double **A = create_two_dim_double(640, 930, "zeros");

	for (int d = 1; d < 930; d++)
	  for (int c = 2; c < 640; c++)
	    for (int b = 2; b < 640; b++)
	      for (int a = 2; a < 640; a++)
	      {
	        
	       B[a]=B[a-2]-A[a][b];
	        
	       B[a]=B[a+1]/A[a][b];
	        
	       A[a][b]=0.853;
	       A[a-1][b-1]=B[a];
	        
	       A[a][b]=B[a]-A[a][b];
	       B[a]=B[a+5]/A[a][b];
	      }

    return 0;
}