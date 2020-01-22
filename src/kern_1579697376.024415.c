#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(350, 140, 740, "zeros");
	float **B = create_two_dim_float(230, 820, "zeros");

	for (int d = 5; d < 816; d++)
	  for (int c = 3; c < 225; c++)
	    for (int b = 3; b < 225; b++)
	      for (int a = 3; a < 225; a++)
	      {
	        
	       B[a][b]=B[a-3][b-5]+0.347;
	        
	       B[a][b]=B[a+1][b+2]-0.361;
	        
	       B[a][b]=B[a+5][b+4]/0.755;
	        
	       B[a][b]=B[a+2][b]/0.712;
	      }

    return 0;
}