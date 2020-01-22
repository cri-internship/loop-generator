#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(60, 700, "ones");
	double **C = create_two_dim_double(230, 750, "ones");
	double *A = create_one_dim_double(330, "ones");

	for (int b = 4; b < 698; b++)
	  for (int a = 5; a < 58; a++)
	  {
	    
	     C[a][b]=C[a-1][b-4]*A[a];
	    
	     B[a][b]=B[a-1][b-4]*0.874;
	    
	     B[a][b]=B[a-5][b-4]+0.636;
	    
	     B[a][b]=B[a+2][b+2]*A[a]+C[a][b];
	    
	     C[a][b]=0.777;
	    
	     double var_a=C[a][b]/0.752;
	     double var_b=C[a-3][b-2]*0.128;
	  }

    return 0;
}