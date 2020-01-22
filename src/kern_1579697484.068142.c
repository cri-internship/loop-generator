#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(10, "zeros");
	float ***A = create_three_dim_float(360, 540, 450, "zeros");

	for (int b = 0; b < 540; b++)
	  for (int a = 0; a < 8; a++)
	  {
	    
	     B[a]=B[a+2]-0.241;
	    
	     float var_a=A[a][b][a]+0.593;
	     float var_b=A[a+1][b][a+5]*0.138;
	  }

    return 0;
}