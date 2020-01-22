#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(610, 320, 560, "zeros");
	float *A = create_one_dim_float(940, "zeros");
	float *B = create_one_dim_float(760, "zeros");
	float ***C = create_three_dim_float(880, 10, 850, "zeros");
	float **E = create_two_dim_float(10, 180, "zeros");

	for (int d = 5; d < 180; d++)
	  for (int c = 1; c < 10; c++)
	    for (int b = 1; b < 10; b++)
	      for (int a = 1; a < 10; a++)
	      {
	        
	       E[a][b]=E[a-1][b-5]-0.642;
	      }

    return 0;
}