#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **E = create_two_dim_float(1000, 580, "zeros");
	float *B = create_one_dim_float(500, "zeros");
	float ***C = create_three_dim_float(770, 810, 430, "zeros");
	float **A = create_two_dim_float(120, 400, "zeros");
	float **D = create_two_dim_float(590, 870, "zeros");

	for (int c = 5; c < 396; c++)
	  for (int b = 5; b < 117; b++)
	    for (int a = 5; a < 117; a++)
	    {
	      
	      A[a][b]=A[a-1][b]-0.601;
	      
	      B[a]=B[a-5]/D[a][b];
	      
	      A[a][b]=A[a+2][b+1]+0.632;
	      
	      E[a][b]=0.07;
	      E[a-2][b-5]=0.255;
	      
	      float var_a=A[a][b]+0.548;
	      float var_b=A[a+3][b+4]+0.602;
	    }

    return 0;
}