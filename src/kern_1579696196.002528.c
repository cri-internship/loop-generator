#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(840, "zeros");
	double **A = create_two_dim_double(320, 570, "zeros");

	for (int d = 0; d < 565; d++)
	  for (int c = 1; c < 315; c++)
	    for (int b = 1; b < 315; b++)
	      for (int a = 1; a < 315; a++)
	      {
	        
	       A[a][b]=A[a+5][b+5]/0.639;
	        
	       B[a]=B[a]-0.213;
	       A[a][b]=B[a-1]/A[a][b];
	      }

    return 0;
}