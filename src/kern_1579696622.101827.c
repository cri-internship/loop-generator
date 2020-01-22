#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(350, 370, "ones");
	double *C = create_one_dim_double(840, "ones");
	double *D = create_one_dim_double(240, "ones");
	double *B = create_one_dim_double(870, "ones");

	for (int b = 4; b < 239; b++)
	  for (int a = 4; a < 239; a++)
	  {
	    
	     D[a]=D[a-4]+C[a]/A[a][b]-0.958;
	    
	     double var_a=B[a]*0.992;
	     B[a]=0.505;
	    
	     D[a]=0.686*A[a][b];
	    
	     C[a]=C[a+1]/0.664;
	    
	     C[a]=C[a+2]/D[a]-B[a]+A[a][b];
	    
	     B[a]=D[a]+0.431;
	     A[a][b]=D[a+1]*C[a];
	    
	     double var_b=C[a]-0.93;
	  }

    return 0;
}