#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(680, 760, 320, "zeros");
	float *A = create_one_dim_float(300, "zeros");
	float **B = create_two_dim_float(580, 840, "zeros");

	for (int b = 2; b < 760; b++)
	  for (int a = 2; a < 680; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-2][a-1]*0.557;
	  }

    return 0;
}