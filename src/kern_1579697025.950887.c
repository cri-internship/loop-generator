#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(380, 150, "ones");
	float *B = create_one_dim_float(810, "ones");
	float **D = create_two_dim_float(140, 460, "ones");
	float **E = create_two_dim_float(790, 320, "ones");
	float ***A = create_three_dim_float(840, 10, 450, "ones");

	for (int d = 3; d < 459; d++)
	  for (int c = 3; c < 135; c++)
	    for (int b = 3; b < 135; b++)
	      for (int a = 3; a < 135; a++)
	      {
	        
	       B[a]=B[a-1]+A[a][b][c]-E[a][b]*0.368/D[a][b];
	        
	       D[a][b]=D[a+5][b]-0.821;
	        
	       D[a][b]=B[a];
	        
	       float var_a=D[a][b]+0.192;
	       float var_b=D[a-3][b-3]*0.405;
	      }

    return 0;
}