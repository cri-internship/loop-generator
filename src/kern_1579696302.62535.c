#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(650, 240, "ones");
	float **A = create_two_dim_float(390, 340, "ones");

	for (int d = 5; d < 239; d++)
	  for (int c = 3; c < 650; c++)
	    for (int b = 3; b < 650; b++)
	      for (int a = 3; a < 650; a++)
	      {
	        
	       B[a][b]=A[a][b];
	       B[a-3][b-5]=A[a][b];
	        
	       B[a][b]=0.24;
	      }

    return 0;
}