#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(760, 760, 210, "ones");
	float *B = create_one_dim_float(820, "ones");

	for (int c = 1; c < 210; c++)
	  for (int b = 0; b < 760; b++)
	    for (int a = 5; a < 760; a++)
	    {
	      
	      B[a]=0.831;
	      float  var_a=B[a]*0.832;
	      
	      B[a]=B[a-3]+0.064;
	      
	      A[a][b][c]=A[a][b][c]*0.08;
	      B[a]=A[a-5][b][c-1]/B[a];
	    }

    return 0;
}