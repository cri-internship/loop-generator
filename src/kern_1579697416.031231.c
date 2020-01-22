#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(550, "ones");
	float *D = create_one_dim_float(850, "ones");
	float *A = create_one_dim_float(850, "ones");
	float ***B = create_three_dim_float(40, 600, 630, "ones");
	float *E = create_one_dim_float(860, "ones");

	for (int b = 4; b < 600; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     B[a][b][a]=A[a]*D[a]-B[a][b][a]+E[a]/C[a];
	     D[a]=A[a]+D[a]-C[a]*B[a][b][a]/E[a];
	    
	     float var_a=D[a]-0.944;
	     float var_b=D[a+3]+0.575;
	    
	     float var_c=B[a][b][a]-0.437;
	     float var_d=B[a-5][b-4][a-5]/0.169;
	  }

    return 0;
}