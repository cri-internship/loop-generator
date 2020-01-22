#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(450, "ones");
	double *B = create_one_dim_double(390, "ones");
	double ***A = create_three_dim_double(230, 400, 210, "ones");
	double **D = create_two_dim_double(220, 40, "ones");

	for (int b = 2; b < 37; b++)
	  for (int a = 5; a < 216; a++)
	  {
	    
	     C[a]=C[a-4]-A[a][b][a]*D[a][b]+B[a];
	    
	     D[a][b]=D[a-3][b-1]*0.733;
	    
	     B[a]=B[a-5]*0.125;
	    
	     A[a][b][a]=C[a];
	     A[a-1][b-2][a-3]=D[a][b]-C[a];
	    
	     double var_a=D[a][b]+0.38;
	     double var_b=D[a+3][b+3]*0.543;
	    
	     B[a]=B[a]*D[a][b];
	    
	     A[a][b][a]=D[a][b]+C[a]-A[a][b][a];
	     C[a]=D[a+4][b+3]-B[a];
	  }

    return 0;
}