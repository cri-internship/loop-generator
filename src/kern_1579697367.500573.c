#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(770, 330, "ones");
	double **B = create_two_dim_double(100, 640, "ones");

	for (int c = 5; c < 326; c++)
	  for (int b = 5; b < 96; b++)
	    for (int a = 5; a < 96; a++)
	    {
	      
	      A[a][b]=A[a][b-4]+0.773;
	      
	      B[a][b]=B[a-2][b-5]/A[a][b];
	      
	      B[a][b]=B[a+4][b+5]-0.667;
	      
	      double var_a=A[a][b]-0.197;
	      double var_b=A[a+3][b+4]-0.317;
	      
	      B[a][b]=A[a][b]*B[a][b];
	      A[a][b]=A[a-5][b-4]+B[a][b];
	    }

    return 0;
}