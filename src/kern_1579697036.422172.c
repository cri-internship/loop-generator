#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(180, "ones");
	float ***B = create_three_dim_float(70, 380, 410, "ones");
	float *A = create_one_dim_float(20, "ones");
	float *E = create_one_dim_float(770, "ones");
	float **C = create_two_dim_float(810, 370, "ones");

	for (int c = 0; c < 405; c++)
	  for (int b = 0; b < 365; b++)
	    for (int a = 5; a < 20; a++)
	    {
	      
	      C[a][b]=B[a][b][c]+D[a]-A[a]/E[a];
	      C[a+3][b+5]=E[a];
	      
	      A[a]=0.223;
	      A[a-5]=0.855;
	      
	      float var_a=B[a][b][c]+0.285;
	      float var_b=B[a][b][c+5]+0.252;
	    }

    return 0;
}