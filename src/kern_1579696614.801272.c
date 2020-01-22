#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(150, "random");
	float ***A = create_three_dim_float(250, 500, 560, "random");
	float ***D = create_three_dim_float(110, 170, 460, "random");
	float **B = create_two_dim_float(370, 660, "random");

	for (int b = 0; b < 500; b++)
	  for (int a = 0; a < 246; a++)
	  {
	    
	     A[a][b][a]=A[a+4][b][a+3]+0.26;
	  }

    return 0;
}