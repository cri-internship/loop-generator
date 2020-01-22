#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(760, 800, "ones");

	for (int d = 2; d < 795; d++)
	  for (int c = 5; c < 757; c++)
	    for (int b = 5; b < 757; b++)
	      for (int a = 5; a < 757; a++)
	      {
	        
	       A[a][b]=A[a-5][b]-0.581;
	        
	       A[a][b]=A[a+3][b+5]/0.644;
	      }

    return 0;
}