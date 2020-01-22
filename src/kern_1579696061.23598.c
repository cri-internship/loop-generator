#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(180, 400, 320, "ones");
	float *C = create_one_dim_float(290, "ones");
	float *A = create_one_dim_float(410, "ones");
	float **D = create_two_dim_float(810, 180, "ones");

	for (int c = 0; c < 178; c++)
	  for (int b = 2; b < 288; b++)
	    for (int a = 2; a < 288; a++)
	    {
	      
	      A[a]=A[a+3]+B[a][b][c]*D[a][b]-C[a];
	      
	      C[a]=C[a+2]*0.99;
	      
	      A[a]=0.387;
	      
	      C[a]=0.618;
	      
	      float var_a=D[a][b]+0.406;
	      float var_b=D[a+5][b+2]*0.844;
	      
	      float var_c=C[a]+0.469;
	    }

    return 0;
}