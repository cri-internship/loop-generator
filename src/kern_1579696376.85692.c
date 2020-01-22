#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(320, 800, "zeros");
	double **D = create_two_dim_double(1000, 430, "zeros");
	double ***B = create_three_dim_double(620, 860, 470, "zeros");
	double *A = create_one_dim_double(400, "zeros");

	for (int b = 4; b < 427; b++)
	  for (int a = 5; a < 317; a++)
	  {
	    
	     C[a][b]=C[a-5][b-4]/0.125;
	    
	     B[a][b][a]=B[a+2][b+1][a+3]/A[a]+0.046;
	    
	     C[a][b]=B[a][b][a];
	    
	     D[a][b]=B[a][b][a]+0.891;
	     D[a-2][b-3]=B[a][b][a]-C[a][b]+A[a];
	    
	     double var_a=D[a][b]-0.613;
	     double var_b=D[a+3][b+3]*0.732;
	    
	     B[a][b][a]=A[a]+D[a][b];
	     D[a][b]=A[a+4]/D[a][b];
	  }

    return 0;
}