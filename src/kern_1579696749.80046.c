#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(900, 830, "zeros");
	double *B = create_one_dim_double(930, "zeros");
	double *A = create_one_dim_double(380, "zeros");

	for (int b = 3; b < 826; b++)
	  for (int a = 3; a < 379; a++)
	  {
	    
	     C[a][b]=C[a-2][b-3]-0.627*A[a];
	    
	     B[a]=B[a-3]/0.015;
	    
	     C[a][b]=C[a+1][b+4]-0.587;
	    
	     B[a]=0.127;
	    
	     double var_a=A[a]+0.727;
	     double var_b=A[a+1]/0.912;
	  }

    return 0;
}