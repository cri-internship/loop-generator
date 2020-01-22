#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(260, 1000, "ones");
	double **D = create_two_dim_double(710, 700, "ones");
	double *B = create_one_dim_double(630, "ones");
	double **C = create_two_dim_double(390, 840, "ones");

	for (int c = 5; c < 696; c++)
	  for (int b = 4; b < 260; b++)
	    for (int a = 4; a < 260; a++)
	    {
	      
	      D[a][b]=D[a+2][b+1]+B[a]/C[a][b]*A[a][b];
	      
	      D[a][b]=A[a][b];
	      
	      D[a][b]=D[a][b]/C[a][b];
	      B[a]=D[a-4][b-2]-0.891+B[a]/A[a][b];
	      
	      C[a][b]=A[a][b]-D[a][b];
	      A[a][b]=A[a-4][b-5]+0.729/C[a][b]*B[a];
	      
	      double var_a=D[a][b]*0.396;
	      double var_b=D[a+4][b]+0.404;
	    }

    return 0;
}