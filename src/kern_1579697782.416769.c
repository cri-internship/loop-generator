#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(660, 210, "ones");
	double **A = create_two_dim_double(30, 360, "ones");
	double *B = create_one_dim_double(700, "ones");

	for (int b = 5; b < 205; b++)
	  for (int a = 4; a < 29; a++)
	  {
	    
	     C[a][b]=C[a-4][b]/0.931;
	    
	     A[a][b]=A[a+1][b+2]-0.317/C[a][b];
	    
	     B[a]=A[a][b]/0.384;
	     B[a]=C[a][b]-0.836;
	    
	     double var_a=A[a][b]/0.25;
	     double var_b=A[a][b-5]-0.439;
	    
	     A[a][b]=A[a][b]/C[a][b]-B[a];
	     C[a][b]=A[a-1][b-2]+0.725;
	    
	     double var_c=C[a][b]/0.956;
	     double var_d=C[a+3][b+5]*0.726;
	  }

    return 0;
}