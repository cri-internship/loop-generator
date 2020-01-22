#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(320, 780, "ones");
	float **A = create_two_dim_float(250, 70, "ones");

	for (int d = 0; d < 68; d++)
	  for (int c = 5; c < 245; c++)
	    for (int b = 5; b < 245; b++)
	      for (int a = 5; a < 245; a++)
	      {
	        
	       A[a][b]=A[a+1][b+1]+B[a][b];
	        
	       A[a][b]=B[a][b];
	      }

    return 0;
}