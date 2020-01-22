#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(860, "random");
	float ***D = create_three_dim_float(620, 80, 500, "random");
	float ***C = create_three_dim_float(730, 940, 780, "random");
	float **A = create_two_dim_float(110, 710, "random");
	float *B = create_one_dim_float(220, "random");

	for (int b = 5; b < 80; b++)
	  for (int a = 5; a < 620; a++)
	  {
	    
	     C[a][b][a]=C[a-1][b-2][a-2]/E[a]-B[a]*D[a][b][a]+A[a][b];
	    
	     C[a][b][a]=C[a-1][b-3][a-3]/0.488;
	    
	     E[a]=E[a-4]*0.623;
	    
	     D[a][b][a]=0.901;
	     D[a-2][b][a-5]=0.911;
	    
	     E[a]=C[a][b][a]+D[a][b][a]*B[a];
	     D[a][b][a]=C[a-1][b-4][a-4]-A[a][b]*D[a][b][a]/E[a];
	    
	     float var_a=C[a][b][a]/0.116;
	     float var_b=C[a][b-5][a-4]/0.291;
	  }

    return 0;
}