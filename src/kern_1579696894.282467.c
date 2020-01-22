#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(230, 400, "ones");
	double *B = create_one_dim_double(140, "ones");
	double ***C = create_three_dim_double(30, 410, 170, "ones");

	for (int b = 5; b < 399; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     B[a]=B[a-3]-C[a][b][a];
	    
	     C[a][b][a]=C[a][b-2][a-4]*0.001;
	    
	     A[a][b]=B[a]+0.258;
	     A[a][b-5]=0.429;
	    
	     C[a][b][a]=B[a]+A[a][b];
	     B[a]=B[a-2]-A[a][b]*C[a][b][a];
	    
	     double var_a=A[a][b]/0.91;
	     double var_b=A[a+4][b+1]/0.62;
	    
	     double var_c=C[a][b][a]-0.832;
	  }

    return 0;
}