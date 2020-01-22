#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(850, "ones");
	double *C = create_one_dim_double(860, "ones");
	double ***B = create_three_dim_double(100, 810, 330, "ones");

	for (int c = 4; c < 330; c++)
	  for (int b = 1; b < 810; b++)
	    for (int a = 4; a < 100; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-4]-0.865+A[a];
	      
	      A[a]=0.838;
	      float  var_a=A[a]*0.042;
	      
	      B[a][b][c]=A[a]-B[a][b][c];
	      A[a]=C[a]-B[a][b][c];
	      
	      C[a]=B[a][b][c]/A[a];
	      C[a+4]=B[a][b][c]*A[a];
	      
	      double var_b=A[a]*0.08;
	      double var_c=A[a+2]/0.239;
	    }

    return 0;
}