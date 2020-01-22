#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(810, 140, 360, "random");
	float *A = create_one_dim_float(740, "random");
	float *E = create_one_dim_float(50, "random");
	float *D = create_one_dim_float(100, "random");
	float **B = create_two_dim_float(930, 370, "random");

	for (int d = 0; d < 360; d++)
	  for (int c = 4; c < 140; c++)
	    for (int b = 2; b < 95; b++)
	      for (int a = 2; a < 95; a++)
	      {
	        
	       A[a]=A[a-1]/0.756;
	        
	       A[a]=A[a-2]-0.067;
	        
	       C[a][b][c]=C[a-1][b-4][c]-0.929;
	        
	       D[a]=D[a+2]-E[a]*B[a][b];
	        
	       B[a][b]=B[a+2][b+3]-D[a]/A[a]*C[a][b][c];
	        
	       D[a]=A[a]+C[a][b][c]/B[a][b];
	        
	       float var_a=D[a]/0.26;
	       float var_b=D[a+5]-0.191;
	      }

    return 0;
}