#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(10, 900, 730, "ones");
	float **A = create_two_dim_float(670, 760, "ones");

	for (int d = 3; d < 757; d++)
	  for (int c = 2; c < 665; c++)
	    for (int b = 2; b < 665; b++)
	      for (int a = 2; a < 665; a++)
	      {
	        
	       A[a][b]=0.616;
	       A[a-2][b-3]=0.893;
	        
	       A[a][b]=0.227;
	        
	       float var_a=A[a][b]*0.807;
	       float var_b=A[a+5][b+3]-0.344;
	      }

    return 0;
}