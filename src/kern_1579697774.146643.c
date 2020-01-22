#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(880, "zeros");
	float ***C = create_three_dim_float(800, 650, 920, "zeros");
	float *A = create_one_dim_float(910, "zeros");

	for (int d = 0; d < 920; d++)
	  for (int c = 3; c < 650; c++)
	    for (int b = 2; b < 800; b++)
	      for (int a = 2; a < 800; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-3][c]-0.808;
	      }

    return 0;
}