#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(810, "random");
	float *D = create_one_dim_float(380, "random");
	float ***C = create_three_dim_float(250, 330, 360, "random");
	float *A = create_one_dim_float(930, "random");

	for (int d = 0; d < 358; d++)
	  for (int c = 0; c < 330; c++)
	    for (int b = 4; b < 249; b++)
	      for (int a = 4; a < 249; a++)
	      {
	        
	       A[a]=A[a-4]+B[a];
	        
	       A[a]=A[a+1]-C[a][b][c]*D[a];
	        
	       C[a][b][c]=C[a+1][b][c+2]+A[a]/D[a]*B[a];
	        
	       B[a]=B[a+3]/D[a];
	        
	       B[a]=D[a]/0.521*A[a];
	       A[a]=D[a+4]/B[a]-C[a][b][c];
	        
	       float var_a=D[a]-0.685;
	       float var_b=D[a-3]*0.338;
	      }

    return 0;
}