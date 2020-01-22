#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(360, "zeros");
	double **C = create_two_dim_double(990, 360, "zeros");
	double *A = create_one_dim_double(700, "zeros");
	double **D = create_two_dim_double(830, 560, "zeros");

	for (int b = 5; b < 360; b++)
	  for (int a = 4; a < 360; a++)
	  {
	    
	     A[a]=A[a+1]*0.064;
	    
	     B[a]=C[a][b];
	     B[a-3]=D[a][b];
	    
	     D[a][b]=A[a];
	     D[a-1][b-2]=B[a]-B[a];
	    
	     double var_a=C[a][b]+0.251;
	     double var_b=C[a-4][b-5]/0.056;
	  }

    return 0;
}