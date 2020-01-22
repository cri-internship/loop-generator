#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(600, "ones");
	double **B = create_two_dim_double(870, 140, "ones");

	for (int c = 3; c < 135; c++)
	  for (int b = 3; b < 598; b++)
	    for (int a = 3; a < 598; a++)
	    {
	      
	      A[a]=A[a-3]/B[a][b];
	      
	      float  var_a=A[a]-0.184;
	      
	      B[a][b]=B[a-3][b-2]-0.788;
	      
	      B[a][b]=B[a][b-3]/A[a];
	      
	      B[a][b]=B[a+5][b+5]/A[a];
	      
	      A[a]=A[a]-B[a][b];
	      B[a][b]=A[a+2]/B[a][b];
	      
	      B[a][b]=B[a][b]+A[a];
	      A[a]=B[a+5][b]/A[a];
	    }

    return 0;
}