#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(560, 670, 1000, "random");

	for (int b = 0; b < 670; b++)
	  for (int a = 0; a < 557; a++)
	  {
	    
	     float var_a=A[a][b][a]+0.366;
	     float var_b=A[a+2][b][a+3]-0.454;
	  }

    return 0;
}