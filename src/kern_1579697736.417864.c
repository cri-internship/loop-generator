#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *E = create_one_dim_double(470, "zeros");
	double *A = create_one_dim_double(810, "zeros");
	double *B = create_one_dim_double(950, "zeros");
	double *D = create_one_dim_double(620, "zeros");
	double *C = create_one_dim_double(440, "zeros");

	for (int b = 3; b < 440; b++)
	  for (int a = 3; a < 440; a++)
	  {
	    
	     C[a]=C[a-3]/B[a]+E[a]*A[a]-D[a];
	    
	     E[a]=E[a-3]*0.079;
	    
	     D[a]=D[a+5]/0.432;
	    
	     D[a]=D[a+4]-C[a];
	    
	     double var_a=E[a]-0.176;
	     double var_b=E[a+4]-0.233;
	  }

    return 0;
}