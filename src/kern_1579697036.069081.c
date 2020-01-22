#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(960, "zeros");
	double **C = create_two_dim_double(800, 820, "zeros");
	double **B = create_two_dim_double(670, 540, "zeros");

	for (int b = 4; b < 537; b++)
	  for (int a = 2; a < 668; a++)
	  {
	    
	     B[a][b]=B[a+2][b+3]+C[a][b];
	    
	     B[a][b]=A[a];
	    
	     double var_a=A[a]+0.571;
	     double var_b=A[a-2]*0.06;
	    
	     B[a][b]=A[a]*0.648/B[a][b];
	     A[a]=A[a+2]*C[a][b];
	  }

    return 0;
}