#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(840, 820, 140, "zeros");
	float ***B = create_three_dim_float(880, 290, 910, "zeros");

	for (int d = 1; d < 140; d++)
	  for (int c = 0; c < 820; c++)
	    for (int b = 4; b < 840; b++)
	      for (int a = 4; a < 840; a++)
	      {
	        
	       float var_a=A[a][b][c]*0.248;
	       float var_b=A[a-4][b][c-1]*0.406;
	      }

    return 0;
}