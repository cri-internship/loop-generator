#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(170, 760, "zeros");
	double *A = create_one_dim_double(410, "zeros");
	double **B = create_two_dim_double(140, 880, "zeros");

	for (int b = 0; b < 756; b++)
	  for (int a = 4; a < 137; a++)
	  {
	    
	     A[a]=A[a-3]-C[a][b];
	    
	     B[a][b]=B[a-2][b]+A[a]/A[a];
	    
	     A[a]=A[a-4]-B[a][b];
	    
	     C[a][b]=C[a+1][b+4]+0.214;
	    
	     C[a][b]=B[a][b]/A[a];
	     A[a]=B[a+3][b+5]+0.453;
	  }

    return 0;
}