#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(480, "ones");
	double *E = create_one_dim_double(360, "ones");
	double ***A = create_three_dim_double(950, 480, 600, "ones");
	double *B = create_one_dim_double(780, "ones");
	double ***C = create_three_dim_double(740, 760, 170, "ones");

	for (int b = 1; b < 480; b++)
	  for (int a = 4; a < 477; a++)
	  {
	    
	     D[a]=D[a+3]-E[a]/B[a]+A[a][b][a]*0.085;
	    
	     A[a][b][a]=D[a]-C[a][b][a]/D[a];
	     A[a-1][b][a-4]=E[a]-D[a];
	    
	     double var_a=A[a][b][a]/0.744;
	     double var_b=A[a-2][b-1][a-3]/0.216;
	    
	     C[a][b][a]=D[a]/E[a]-B[a]*C[a][b][a];
	     A[a][b][a]=D[a-2]+A[a][b][a]/B[a];
	  }

    return 0;
}