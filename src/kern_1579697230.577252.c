#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *B = create_one_dim_float(70, "random");
	float ***A = create_three_dim_float(710, 930, 800, "random");

	for (int d = 0; d < 67; d++)
	  for (int c = 0; c < 67; c++)
	    for (int b = 0; b < 67; b++)
	      for (int a = 0; a < 67; a++)
	      {
	        
	       B[a]=A[a][b][c];
	       B[a+3]=0.409;
	      }

    return 0;
}