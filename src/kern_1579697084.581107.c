#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(240, 640, "ones");
	double **B = create_two_dim_double(970, 410, "ones");

	for (int d = 2; d < 638; d++)
	  for (int c = 1; c < 237; c++)
	    for (int b = 1; b < 237; b++)
	      for (int a = 1; a < 237; a++)
	      {
	        
	       A[a][b]=0.511;
	       A[a+3][b+2]=0.84;
	        
	       A[a][b]=A[a][b]/B[a][b];
	       B[a][b]=A[a-1][b-2]*B[a][b];
	      }

    return 0;
}