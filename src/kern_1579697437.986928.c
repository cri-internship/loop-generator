#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(70, 550, "zeros");
	double *A = create_one_dim_double(220, "zeros");

	for (int c = 5; c < 548; c++)
	  for (int b = 4; b < 68; b++)
	    for (int a = 4; a < 68; a++)
	    {
	      
	      B[a][b]=B[a+2][b+2]+A[a];
	      
	      A[a]=0.524;
	      A[a-4]=0.292;
	      
	      B[a][b]=A[a];
	      
	      double var_c=A[a]+0.118;
	      double var_d=A[a-3]/0.949;
	    }

    return 0;
}