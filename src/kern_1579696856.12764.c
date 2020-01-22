#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(500, 640, "random");
	double *B = create_one_dim_double(180, "random");
	double ***A = create_three_dim_double(420, 720, 640, "random");

	for (int c = 3; c < 640; c++)
	  for (int b = 5; b < 639; b++)
	    for (int a = 4; a < 177; a++)
	    {
	      
	      C[a][b]=C[a-4][b-4]*0.293;
	      
	      C[a][b]=C[a+3][b+1]-0.141;
	      
	      A[a][b][c]=0.393;
	      A[a-4][b-3][c-3]=0.099;
	      
	      double var_a=B[a]+0.993;
	      double var_b=B[a+3]*0.841;
	    }

    return 0;
}