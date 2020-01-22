#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(740, 350, 480, "ones");
	double *A = create_one_dim_double(470, "ones");
	double **C = create_two_dim_double(540, 280, "ones");

	for (int c = 2; c < 480; c++)
	  for (int b = 3; b < 280; b++)
	    for (int a = 3; a < 465; a++)
	    {
	      
	      A[a]=A[a+5]+B[a][b][c];
	      
	      C[a][b]=0.288;
	      C[a-3][b-2]=0.445;
	      
	      double var_a=B[a][b][c]*0.185;
	      double var_b=B[a][b-1][c-2]-0.398;
	      
	      double var_c=B[a][b][c]-0.385;
	      double var_d=B[a-1][b-3][c-1]*0.398;
	    }

    return 0;
}