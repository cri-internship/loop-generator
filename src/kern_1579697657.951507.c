#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(600, "ones");
	double *D = create_one_dim_double(350, "ones");
	double *A = create_one_dim_double(370, "ones");
	double ***C = create_three_dim_double(170, 400, 860, "ones");

	for (int b = 4; b < 350; b++)
	  for (int a = 4; a < 350; a++)
	  {
	    
	     B[a]=B[a-2]-0.166;
	    
	     D[a]=0.837/C[a][b][a]*B[a];
	     D[a-2]=A[a]/B[a]*C[a][b][a];
	    
	     A[a]=B[a]/D[a];
	     D[a]=B[a+2]+D[a]*C[a][b][a]-0.036;
	    
	     double var_a=B[a]/0.179;
	     double var_b=B[a-4]-0.167;
	    
	     C[a][b][a]=A[a]-B[a]/C[a][b][a]+D[a];
	  }

    return 0;
}