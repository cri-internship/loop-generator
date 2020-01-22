#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(660, "ones");
	float ***C = create_three_dim_float(720, 300, 210, "ones");
	float **A = create_two_dim_float(890, 780, "ones");

	for (int d = 1; d < 775; d++)
	  for (int c = 5; c < 660; c++)
	    for (int b = 5; b < 660; b++)
	      for (int a = 5; a < 660; a++)
	      {
	        
	       A[a][b]=A[a-1][b-1]*0.362;
	        
	       B[a]=0.677;
	       B[a-5]=0.238;
	        
	       float var_a=A[a][b]*0.353;
	       float var_b=A[a+1][b+5]+0.378;
	      }

    return 0;
}