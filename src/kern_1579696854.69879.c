#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(500, 250, "zeros");
	double *D = create_one_dim_double(490, "zeros");
	double **A = create_two_dim_double(550, 170, "zeros");
	double *C = create_one_dim_double(870, "zeros");

	for (int c = 3; c < 167; c++)
	  for (int b = 4; b < 500; b++)
	    for (int a = 4; a < 500; a++)
	    {
	      
	      A[a][b]=A[a+5][b+3]+0.629;
	      
	      B[a][b]=A[a][b];
	      B[a-4][b-3]=C[a]+D[a];
	      
	      C[a]=B[a][b]+D[a]-A[a][b];
	      C[a+4]=A[a][b]*B[a][b];
	      
	      B[a][b]=A[a][b];
	    }

    return 0;
}