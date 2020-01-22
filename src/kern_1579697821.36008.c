#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 510, "ones");
	float *A = create_one_dim_float(850, "ones");

	for (int b = 5; b < 506; b++)
	  for (int a = 5; a < 987; a++)
	  {
	    
	     B[a][b]=B[a-4][b-5]*0.856;
	    
	     B[a][b]=0.107;
	    
	     float var_a=B[a][b]/0.53;
	     float var_b=B[a+1][b+1]+0.814;
	    
	     float var_c=B[a][b]*0.37;
	     float var_d=B[a][b-3]*0.265;
	  }

    return 0;
}