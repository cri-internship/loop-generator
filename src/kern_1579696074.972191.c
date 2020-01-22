#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(700, "ones");
	float ***C = create_three_dim_float(290, 410, 870, "ones");
	float *E = create_one_dim_float(210, "ones");
	float *A = create_one_dim_float(170, "ones");
	float **D = create_two_dim_float(820, 600, "ones");

	for (int c = 3; c < 600; c++)
	  for (int b = 4; b < 210; b++)
	    for (int a = 4; a < 210; a++)
	    {
	      
	      E[a]=E[a-4]/A[a]+0.284*B[a];
	      
	      D[a][b]=D[a-1][b-3]-C[a][b][c]/E[a]+C[a][b][c];
	      
	      B[a]=0.193;
	      B[a-3]=0.665;
	      
	      E[a]=A[a]/C[a][b][c]+B[a];
	    }

    return 0;
}