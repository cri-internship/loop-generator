#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(630, 740, 910, "random");
	float *B = create_one_dim_float(440, "random");

	for (int d = 0; d < 910; d++)
	  for (int c = 1; c < 740; c++)
	    for (int b = 5; b < 437; b++)
	      for (int a = 5; a < 437; a++)
	      {
	        
	       B[a]=B[a-3]+0.376;
	        
	       B[a]=B[a+3]-0.741;
	        
	       B[a]=B[a+1]/0.917;
	        
	       float var_a=B[a]+0.672;
	       float var_b=B[a-5]/0.043;
	        
	       float var_c=A[a][b][c]/0.516;
	       float var_d=A[a-2][b-1][c]+0.24;
	      }

    return 0;
}