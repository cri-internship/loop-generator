#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(610, 710, "ones");
	double *C = create_one_dim_double(640, "ones");
	double ***A = create_three_dim_double(800, 500, 290, "ones");

	for (int c = 3; c < 290; c++)
	  for (int b = 5; b < 500; b++)
	    for (int a = 3; a < 606; a++)
	    {
	      
	      B[a][b]=B[a+4][b+2]*0.256;
	      
	      A[a][b][c]=0.912;
	      A[a-3][b-3][c-3]=0.534;
	      
	      B[a][b]=B[a][b]*A[a][b][c]/A[a][b][c];
	      C[a]=B[a-3][b-2]/0.891;
	      
	      double var_a=C[a]/0.725;
	      double var_b=C[a+5]-0.629;
	      
	      A[a][b][c]=A[a][b][c]-B[a][b];
	      B[a][b]=A[a-3][b-5][c-3]+0.859-C[a];
	    }

    return 0;
}