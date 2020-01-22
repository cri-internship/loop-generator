#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(130, 330, "ones");
	double **A = create_two_dim_double(520, 790, "ones");

	for (int b = 4; b < 330; b++)
	  for (int a = 3; a < 130; a++)
	  {
	    
	     A[a][b]=A[a][b+3]*0.81;
	    
	     A[a][b]=0.141;
	    
	     double var_a=B[a][b]+0.131;
	     double var_b=B[a-3][b-3]/0.905;
	    
	     A[a][b]=B[a][b]/A[a][b];
	     B[a][b]=B[a-1][b-4]/A[a][b];
	    
	     double var_c=A[a][b]+0.92;
	     double var_d=A[a-2][b]-0.998;
	  }

    return 0;
}