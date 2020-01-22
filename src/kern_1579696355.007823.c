#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(710, 10, 420, "zeros");
	float **C = create_two_dim_float(670, 240, "zeros");
	float ***B = create_three_dim_float(970, 940, 250, "zeros");

	for (int d = 5; d < 240; d++)
	  for (int c = 1; c < 667; c++)
	    for (int b = 1; b < 667; b++)
	      for (int a = 1; a < 667; a++)
	      {
	        
	       C[a][b]=C[a-1][b-5]-0.017;
	        
	       C[a][b]=0.794;
	      }

    return 0;
}