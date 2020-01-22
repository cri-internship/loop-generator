#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(960, "ones");
	float ***A = create_three_dim_float(410, 820, 770, "ones");

	for (int b = 2; b < 957; b++)
	  for (int a = 2; a < 957; a++)
	  {
	    
	     B[a]=B[a+1]/A[a][b][a];
	    
	     B[a]=B[a+3]/0.312;
	    
	     B[a]=B[a+2]/A[a][b][a];
	    
	     float var_a=B[a]+0.539;
	    
	     A[a][b][a]=B[a]/A[a][b][a];
	     B[a]=B[a-2]+A[a][b][a];
	  }

    return 0;
}