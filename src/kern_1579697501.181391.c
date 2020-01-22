#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(170, 820, "ones");
	double *B = create_one_dim_double(460, "ones");

	for (int c = 0; c < 816; c++)
	  for (int b = 0; b < 165; b++)
	    for (int a = 0; a < 165; a++)
	    {
	      
	      A[a][b]=A[a+5][b+4]/0.873;
	      
	      A[a][b]=A[a][b+4]-0.069;
	      
	      A[a][b]=A[a+2][b+1]-0.806;
	      
	      A[a][b]=B[a]-A[a][b];
	      B[a]=A[a][b];
	      
	      A[a][b]=A[a+5][b+2]*0.215;
	      
	      B[a]=0.28;
	      
	      double var_a=A[a][b]-0.344;
	      double var_b=A[a][b+1]+0.413;
	    }

    return 0;
}