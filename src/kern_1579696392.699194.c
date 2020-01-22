#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(610, "random");
	double *C = create_one_dim_double(890, "random");
	double ***A = create_three_dim_double(940, 270, 640, "random");

	for (int c = 0; c < 639; c++)
	  for (int b = 0; b < 266; b++)
	    for (int a = 3; a < 609; a++)
	    {
	      
	      C[a]=C[a-2]-0.852;
	      
	      A[a][b][c]=C[a];
	      A[a+1][b+4][c+1]=B[a]-B[a];
	      
	      double var_a=B[a]-0.322;
	      double var_b=B[a+1]/0.881;
	      
	      C[a]=C[a]/A[a][b][c]-A[a][b][c];
	      A[a][b][c]=C[a-3]-A[a][b][c];
	    }

    return 0;
}