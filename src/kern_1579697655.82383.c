#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(370, 450, 110, "random");
	float *B = create_one_dim_float(250, "random");

	for (int b = 5; b < 450; b++)
	  for (int a = 4; a < 250; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a-1]/0.531;
	    
	     A[a][b][a]=A[a-4][b-4][a-2]+0.614;
	    
	     B[a]=0.529;
	     float  var_a=B[a]+0.861;
	    
	     B[a]=B[a-4]/A[a][b][a];
	    
	     float var_b=B[a]/0.809;
	     B[a]=0.121;
	    
	     float var_c=B[a]-0.757;
	     float var_d=B[a-2]*0.345;
	  }

    return 0;
}