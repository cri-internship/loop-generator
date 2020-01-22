#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(540, 620, "ones");

	for (int b = 5; b < 615; b++)
	  for (int a = 4; a < 536; a++)
	  {
	    
	     A[a][b]=A[a-4][b-2]/0.221;
	    
	     A[a][b]=0.299;
	    
	     float var_a=A[a][b]-0.183;
	     float var_b=A[a+3][b]/0.715;
	  }

    return 0;
}