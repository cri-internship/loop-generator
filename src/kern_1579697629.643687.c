#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(30, 980, 650, "ones");
	float **A = create_two_dim_float(60, 440, "ones");
	float **B = create_two_dim_float(360, 850, "ones");

	for (int b = 4; b < 440; b++)
	  for (int a = 4; a < 30; a++)
	  {
	    
	     B[a][b]=B[a-3][b-4]/0.157;
	    
	     C[a][b][a]=C[a-2][b-3][a-3]*B[a][b];
	    
	     A[a][b]=0.278;
	     A[a-4][b-3]=0.441;
	  }

    return 0;
}