#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(60, 420, 140, "zeros");
	float *B = create_one_dim_float(870, "zeros");

	for (int b = 0; b < 418; b++)
	  for (int a = 0; a < 55; a++)
	  {
	    
	     A[a][b][a]=0.91;
	     A[a+5][b+2][a+1]=0.033;
	  }

    return 0;
}