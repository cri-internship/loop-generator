#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(970, 990, "random");
	float *A = create_one_dim_float(390, "random");
	float *E = create_one_dim_float(310, "random");
	float **B = create_two_dim_float(680, 1000, "random");
	float ***C = create_three_dim_float(850, 70, 320, "random");

	for (int d = 5; d < 1000; d++)
	  for (int c = 4; c < 310; c++)
	    for (int b = 4; b < 310; b++)
	      for (int a = 4; a < 310; a++)
	      {
	        
	       B[a][b]=B[a-3][b-4]+0.276;
	        
	       B[a][b]=B[a-2][b-5]/0.502;
	        
	       float var_a=E[a]/0.604;
	       E[a]=0.056;
	        
	       A[a]=0.577;
	       A[a]=0.505;
	        
	       float var_b=E[a]*0.955;
	       float var_c=E[a-4]*0.178;
	        
	       A[a]=A[a]+B[a][b];
	       B[a][b]=A[a+2]*0.159;
	      }

    return 0;
}