#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(760, 320, 990, "ones");
	float *E = create_one_dim_float(740, "ones");
	float **B = create_two_dim_float(250, 180, "ones");
	float *A = create_one_dim_float(280, "ones");
	float ***D = create_three_dim_float(870, 420, 410, "ones");

	for (int c = 0; c < 410; c++)
	  for (int b = 3; b < 180; b++)
	    for (int a = 5; a < 250; a++)
	    {
	      
	      B[a][b]=B[a-5][b-3]+0.691-D[a][b][c]/E[a];
	      
	      B[a][b]=B[a-5][b]+A[a]*D[a][b][c]-E[a]/A[a];
	      
	      D[a][b][c]=D[a][b+3][c]-B[a][b]*B[a][b]/E[a];
	      
	      float var_a=E[a]+0.637;
	      E[a]=0.333;
	      
	      float var_b=E[a]*0.928;
	      float var_c=E[a-5]/0.932;
	    }

    return 0;
}