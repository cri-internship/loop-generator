#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(100, 990, "zeros");
	double **A = create_two_dim_double(70, 810, "zeros");

	for (int c = 3; c < 807; c++)
	  for (int b = 3; b < 70; b++)
	    for (int a = 3; a < 70; a++)
	    {
	      
	      B[a][b]=B[a][b-3]/A[a][b];
	      
	      A[a][b]=0.333;
	      A[a][b+3]=0.345;
	      
	      B[a][b]=0.151;
	      
	      A[a][b]=B[a][b]/A[a][b];
	      B[a][b]=B[a+2][b+3]/A[a][b];
	    }

    return 0;
}