#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(210, 570, "ones");
	float **B = create_two_dim_float(230, 350, "ones");
	float ***C = create_three_dim_float(500, 980, 130, "ones");

	for (int b = 4; b < 350; b++)
	  for (int a = 5; a < 210; a++)
	  {
	    
	     B[a][b]=B[a-3][b-4]-0.808;
	    
	     A[a][b]=A[a-1][b-2]*0.696;
	    
	     A[a][b]=0.585;
	  }

    return 0;
}