#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(120, 100, "ones");
	float *C = create_one_dim_float(250, "ones");
	float ***A = create_three_dim_float(900, 330, 520, "ones");

	for (int b = 1; b < 330; b++)
	  for (int a = 5; a < 900; a++)
	  {
	    
	     A[a][b][a]=0.85;
	     A[a-5][b-1][a]=0.115;
	  }

    return 0;
}