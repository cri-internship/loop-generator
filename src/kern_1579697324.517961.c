#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(120, 930, 610, "ones");
	float ***B = create_three_dim_float(510, 80, 260, "ones");
	float *A = create_one_dim_float(370, "ones");

	for (int c = 0; c < 260; c++)
	  for (int b = 1; b < 78; b++)
	    for (int a = 3; a < 120; a++)
	    {
	      
	      A[a]=A[a+3]-B[a][b][c];
	      
	      B[a][b][c]=B[a+1][b+2][c]/A[a]*C[a][b][c];
	      
	      float var_a=C[a][b][c]-0.291;
	      float var_b=C[a-3][b-1][c]/0.636;
	    }

    return 0;
}