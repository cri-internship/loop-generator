#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(350, "zeros");
	float ***A = create_three_dim_float(320, 60, 940, "zeros");

	for (int b = 3; b < 60; b++)
	  for (int a = 4; a < 320; a++)
	  {
	    
	     B[a]=A[a][b][a]*0.293;
	     A[a][b][a]=A[a-4][b-3][a]-B[a];
	  }

    return 0;
}