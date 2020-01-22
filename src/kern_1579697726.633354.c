#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(340, 930, "zeros");
	float **B = create_two_dim_float(210, 350, "zeros");
	float **D = create_two_dim_float(820, 630, "zeros");
	float **A = create_two_dim_float(40, 440, "zeros");

	for (int d = 2; d < 630; d++)
	  for (int c = 4; c < 820; c++)
	    for (int b = 4; b < 820; b++)
	      for (int a = 4; a < 820; a++)
	      {
	        
	       D[a][b]=D[a-4][b-2]-0.738;
	      }

    return 0;
}