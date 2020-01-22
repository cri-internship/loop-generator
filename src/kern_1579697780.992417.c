#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(940, "random");
	double **B = create_two_dim_double(240, 260, "random");
	double ***D = create_three_dim_double(810, 550, 340, "random");
	double *C = create_one_dim_double(350, "random");

	for (int c = 4; c < 337; c++)
	  for (int b = 1; b < 550; b++)
	    for (int a = 4; a < 805; a++)
	    {
	      
	      A[a]=A[a-4]*0.76;
	      
	      D[a][b][c]=D[a-1][b-1][c-4]/0.4;
	      
	      float  var_a=A[a]-0.467;
	      
	      A[a]=A[a+3]-D[a][b][c]/C[a];
	      
	      double var_b=D[a][b][c]/0.568;
	      double var_c=D[a+5][b][c+3]*0.846;
	    }

    return 0;
}