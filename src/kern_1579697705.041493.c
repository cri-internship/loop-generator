#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(770, 230, 290, "ones");
	double **E = create_two_dim_double(730, 260, "ones");
	double **B = create_two_dim_double(450, 270, "ones");
	double *C = create_one_dim_double(320, "ones");
	double *A = create_one_dim_double(940, "ones");

	for (int b = 4; b < 226; b++)
	  for (int a = 5; a < 319; a++)
	  {
	    
	     A[a]=A[a-5]/0.86;
	    
	     B[a][b]=B[a+1][b+3]+0.823;
	    
	     D[a][b][a]=D[a][b+4][a+1]+0.302;
	    
	     D[a][b][a]=0.22;
	    
	     double var_a=C[a]*0.049;
	     double var_b=C[a+1]*0.841;
	  }

    return 0;
}