#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(980, "ones");
	double **C = create_two_dim_double(190, 140, "ones");
	double **B = create_two_dim_double(510, 480, "ones");

	for (int b = 4; b < 135; b++)
	  for (int a = 5; a < 187; a++)
	  {
	    
	     B[a][b]=B[a-5][b]*0.231;
	    
	     B[a][b]=B[a-3][b-4]*0.903;
	    
	     C[a][b]=C[a+3][b+5]*0.758;
	    
	     C[a][b]=A[a];
	    
	     double var_a=B[a][b]/0.202;
	     double var_b=B[a-4][b-1]+0.347;
	    
	     A[a]=B[a][b]/0.531;
	     C[a][b]=B[a+1][b+5]*C[a][b]/A[a];
	  }

    return 0;
}