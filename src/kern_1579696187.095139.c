#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(280, 710, "zeros");
	double **B = create_two_dim_double(490, 430, "zeros");
	double **A = create_two_dim_double(230, 110, "zeros");

	for (int b = 5; b < 110; b++)
	  for (int a = 3; a < 230; a++)
	  {
	    
	     B[a][b]=B[a-3][b-5]/A[a][b];
	    
	     B[a][b]=B[a+3][b]/C[a][b];
	    
	     double var_a=A[a][b]-0.606;
	     double var_b=A[a-3][b]*0.895;
	  }

    return 0;
}