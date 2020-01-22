#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "zeros");
	double ***C = create_three_dim_double(420, 440, 970, "zeros");
	double *A = create_one_dim_double(910, "zeros");

	for (int c = 3; c < 969; c++)
	  for (int b = 4; b < 437; b++)
	    for (int a = 5; a < 216; a++)
	    {
	      
	      C[a][b][c]=C[a-1][b-4][c-3]-0.721;
	      
	      B[a]=B[a+4]+C[a][b][c];
	      
	      C[a][b][c]=0.473;
	      
	      A[a]=B[a]*B[a];
	      A[a+4]=C[a][b][c];
	      
	      A[a]=0.813-B[a];
	      
	      double var_a=A[a]/0.979;
	      double var_b=A[a-1]-0.06;
	    }

    return 0;
}