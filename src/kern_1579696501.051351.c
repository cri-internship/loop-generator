#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(170, "zeros");
	float ***A = create_three_dim_float(320, 730, 610, "zeros");
	float ***B = create_three_dim_float(770, 1000, 440, "zeros");
	float *D = create_one_dim_float(200, "zeros");

	for (int b = 4; b < 730; b++)
	  for (int a = 4; a < 197; a++)
	  {
	    
	     D[a]=D[a-3]/C[a]*B[a][b][a]-A[a][b][a];
	    
	     D[a]=D[a+3]*0.946;
	    
	     A[a][b][a]=0.163;
	     A[a-2][b-4][a-4]=0.031;
	  }

    return 0;
}