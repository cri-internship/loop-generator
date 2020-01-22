#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(30, "ones");
	double *A = create_one_dim_double(140, "ones");
	double **C = create_two_dim_double(810, 400, "ones");

	for (int c = 5; c < 397; c++)
	  for (int b = 2; b < 136; b++)
	    for (int a = 2; a < 136; a++)
	    {
	      
	      A[a]=A[a+4]*0.843;
	      
	      C[a][b]=A[a];
	      C[a-2][b-5]=B[a];
	      
	      A[a]=C[a][b]-A[a]+B[a];
	      B[a]=C[a+1][b+3]/B[a]-A[a];
	    }

    return 0;
}