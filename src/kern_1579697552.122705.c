#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(790, 470, "zeros");
	double *B = create_one_dim_double(840, "zeros");

	for (int c = 2; c < 470; c++)
	  for (int b = 4; b < 785; b++)
	    for (int a = 4; a < 785; a++)
	    {
	      
	      B[a]=B[a-1]-0.853;
	      
	      B[a]=A[a][b];
	      
	      A[a][b]=B[a];
	      A[a-4][b-2]=B[a];
	      
	      A[a][b]=0.299;
	      
	      A[a][b]=B[a]-A[a][b];
	      
	      double var_a=B[a]*0.948;
	      double var_b=B[a+2]/0.484;
	    }

    return 0;
}