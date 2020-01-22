#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(250, "random");
	float ***B = create_three_dim_float(130, 950, 320, "random");
	float *C = create_one_dim_float(910, "random");

	for (int d = 0; d < 320; d++)
	  for (int c = 0; c < 947; c++)
	    for (int b = 0; b < 125; b++)
	      for (int a = 0; a < 125; a++)
	      {
	        
	       B[a][b][c]=0.964;
	       B[a+5][b+3][c]=A[a]/C[a];
	      }

    return 0;
}