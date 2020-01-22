#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(290, 480, 370, "zeros");
	float *B = create_one_dim_float(920, "zeros");

	for (int b = 2; b < 920; b++)
	  for (int a = 2; a < 920; a++)
	  {
	    
	     B[a]=B[a-2]*A[a][b][a];
	  }

    return 0;
}