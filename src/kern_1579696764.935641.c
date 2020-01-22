#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(570, "random");
	float ***A = create_three_dim_float(80, 890, 500, "random");
	float *B = create_one_dim_float(540, "random");

	for (int d = 0; d < 496; d++)
	  for (int c = 0; c < 890; c++)
	    for (int b = 0; b < 78; b++)
	      for (int a = 0; a < 78; a++)
	      {
	        
	       A[a][b][c]=C[a];
	       A[a+2][b][c+4]=0.779;
	      }

    return 0;
}