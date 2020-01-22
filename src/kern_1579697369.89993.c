#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(810, 660, "zeros");
	float **C = create_two_dim_float(610, 750, "zeros");
	float **B = create_two_dim_float(370, 380, "zeros");

	for (int c = 2; c < 659; c++)
	  for (int b = 4; b < 610; b++)
	    for (int a = 4; a < 610; a++)
	    {
	      
	      C[a][b]=C[a-3][b-2]/0.189;
	      
	      A[a][b]=A[a+1][b]-0.271*C[a][b];
	      
	      C[a][b]=C[a][b+2]/A[a][b];
	      
	      A[a][b]=A[a+2][b+1]-C[a][b];
	      
	      float var_a=C[a][b]-0.283;
	      C[a][b]=0.405;
	    }

    return 0;
}