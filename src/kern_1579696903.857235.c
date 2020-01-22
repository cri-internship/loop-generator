#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(90, 410, 930, "zeros");
	float **B = create_two_dim_float(810, 980, "zeros");
	float *C = create_one_dim_float(580, "zeros");
	float *E = create_one_dim_float(450, "zeros");
	float *D = create_one_dim_float(40, "zeros");

	for (int d = 4; d < 980; d++)
	  for (int c = 5; c < 448; c++)
	    for (int b = 5; b < 448; b++)
	      for (int a = 5; a < 448; a++)
	      {
	        
	       E[a]=E[a-5]/0.288-B[a][b]*C[a]+D[a];
	        
	       E[a]=E[a+2]-C[a]+D[a]*0.437;
	        
	       B[a][b]=0.052;
	       B[a][b-4]=0.234;
	        
	       float var_a=C[a]-0.695;
	       float var_b=C[a-2]*0.46;
	      }

    return 0;
}