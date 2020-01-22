#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(480, "zeros");
	float **B = create_two_dim_float(940, 450, "zeros");
	float *C = create_one_dim_float(320, "zeros");
	float ***A = create_three_dim_float(70, 370, 610, "zeros");

	for (int d = 2; d < 447; d++)
	  for (int c = 3; c < 320; c++)
	    for (int b = 3; b < 320; b++)
	      for (int a = 3; a < 320; a++)
	      {
	        
	       C[a]=C[a-1]/0.41;
	        
	       D[a]=D[a+4]-0.19;
	        
	       B[a][b]=D[a];
	       B[a+1][b+3]=C[a];
	        
	       float var_a=C[a]/0.649;
	        
	       C[a]=B[a][b]-A[a][b][c]+C[a]*D[a];
	       B[a][b]=B[a-1][b-2]+0.672*C[a];
	        
	       float var_c=C[a]+0.22;
	       float var_d=C[a-3]*0.67;
	      }

    return 0;
}