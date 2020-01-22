#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(790, 650, 890, "ones");
	float **B = create_two_dim_float(40, 70, "ones");
	float ***A = create_three_dim_float(300, 890, 560, "ones");

	for (int b = 3; b < 65; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     B[a][b]=B[a-5][b-2]-0.919;
	    
	     A[a][b][a]=A[a-4][b-1][a-5]/0.646;
	    
	     B[a][b]=B[a][b+1]/0.638;
	    
	     B[a][b]=B[a][b+5]+0.228;
	    
	     A[a][b][a]=0.492;
	    
	     float var_a=B[a][b]*0.437;
	     float var_b=B[a-2][b-3]+0.069;
	  }

    return 0;
}