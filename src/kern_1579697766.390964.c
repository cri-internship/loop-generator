#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(590, 380, "ones");
	float *C = create_one_dim_float(600, "ones");
	float *A = create_one_dim_float(200, "ones");
	float ***D = create_three_dim_float(90, 920, 880, "ones");

	for (int b = 0; b < 379; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     B[a][b]=B[a+3][b+1]/C[a]*A[a];
	    
	     D[a][b][a]=0.609;
	     D[a-2][b][a-5]=0.216;
	    
	     float var_a=D[a][b][a]*0.72;
	     float var_b=D[a-2][b][a]+0.416;
	  }

    return 0;
}