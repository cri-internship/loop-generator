#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(570, 130, 400, "zeros");
	double **A = create_two_dim_double(50, 810, "zeros");
	double *B = create_one_dim_double(150, "zeros");
	double *C = create_one_dim_double(150, "zeros");

	for (int c = 0; c < 399; c++)
	  for (int b = 5; b < 130; b++)
	    for (int a = 5; a < 45; a++)
	    {
	      
	      A[a][b]=A[a-1][b-3]+0.07;
	      
	      A[a][b]=A[a+5][b+5]/C[a]*0.009-B[a];
	      
	      B[a]=D[a][b][c]-0.264+B[a]/A[a][b];
	      C[a]=D[a+4][b][c+1]*B[a]-0.195/C[a];
	      
	      double var_a=B[a]+0.263;
	      double var_b=B[a+2]*0.884;
	      
	      D[a][b][c]=A[a][b]*D[a][b][c]/C[a]+B[a];
	      B[a]=A[a][b+1]/C[a];
	    }

    return 0;
}