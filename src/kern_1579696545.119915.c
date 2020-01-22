#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(240, 110, 330, "ones");
	double *A = create_one_dim_double(140, "ones");
	double **C = create_two_dim_double(40, 240, "ones");
	double *B = create_one_dim_double(710, "ones");
	double *E = create_one_dim_double(550, "ones");

	for (int b = 5; b < 109; b++)
	  for (int a = 4; a < 40; a++)
	  {
	    
	     A[a]=A[a+3]-0.913;
	    
	     A[a]=A[a+4]/C[a][b]*B[a]-E[a]+D[a][b][a];
	    
	     D[a][b][a]=D[a+2][b+1][a+1]/A[a];
	    
	     C[a][b]=0.58;
	     C[a][b-5]=0.139;
	    
	     double var_a=D[a][b][a]+0.518;
	     double var_b=D[a+1][b][a]+0.358;
	    
	     D[a][b][a]=A[a]/B[a]+0.96*C[a][b]-E[a];
	     C[a][b]=A[a-4]-E[a]*C[a][b]+D[a][b][a]/B[a];
	  }

    return 0;
}