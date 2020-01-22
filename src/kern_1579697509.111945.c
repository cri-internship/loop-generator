#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "ones");
	double *B = create_one_dim_double(290, "ones");
	double **C = create_two_dim_double(950, 870, "ones");

	for (int b = 3; b < 865; b++)
	  for (int a = 4; a < 587; a++)
	  {
	    
	     A[a]=A[a+3]/0.417;
	    
	     C[a][b]=C[a+5][b+1]*B[a]/A[a];
	    
	     A[a]=C[a][b]+C[a][b];
	    
	     C[a][b]=B[a]*A[a];
	    
	     double var_a=C[a][b]-0.177;
	     double var_b=C[a][b+5]*0.582;
	  }

    return 0;
}