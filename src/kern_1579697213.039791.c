#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *A = create_one_dim_float(100, "random");
	float ***B = create_three_dim_float(420, 910, 800, "random");

	for (int d = 1; d < 800; d++)
	  for (int c = 2; c < 910; c++)
	    for (int b = 3; b < 420; b++)
	      for (int a = 3; a < 420; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-2][c-1]*0.762;
	      }

    return 0;
}