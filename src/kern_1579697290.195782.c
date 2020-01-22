#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(520, "random");
	float ***A = create_three_dim_float(950, 390, 190, "random");

	for (int b = 0; b < 390; b++)
	  for (int a = 3; a < 950; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a-3]*0.115;
	  }

    return 0;
}