#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(200, 630, 200, "random");

	for (int b = 0; b < 630; b++)
	  for (int a = 0; a < 196; a++)
	  {
	    
	     float var_a=A[a][b][a]+0.169;
	     float var_b=A[a+4][b][a+1]+0.86;
	  }

    return 0;
}