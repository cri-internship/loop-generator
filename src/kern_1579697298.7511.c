#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(740, 40, "zeros");
	double *B = create_one_dim_double(990, "zeros");
	double **C = create_two_dim_double(250, 740, "zeros");

	for (int b = 5; b < 39; b++)
	  for (int a = 5; a < 250; a++)
	  {
	    
	     C[a][b]=C[a][b-5]+0.835;
	    
	     B[a]=B[a-4]*0.518;
	    
	     A[a][b]=A[a+1][b+1]*0.502;
	    
	     A[a][b]=0.589;
	    
	     double var_a=C[a][b]/0.509;
	     double var_b=C[a-5][b-3]-0.101;
	  }

    return 0;
}