#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(230, 850, 230, "random");

	for (int b = 0; b < 846; b++)
	  for (int a = 0; a < 225; a++)
	  {
	    
	     A[a][b][a]=A[a][b+4][a+2]+0.624;
	    
	     float var_a=A[a][b][a]+0.334;
	     float var_b=A[a][b][a+5]*0.007;
	  }

    return 0;
}