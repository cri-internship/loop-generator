#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(590, 560, 670, "zeros");

	for (int c = 0; c < 668; c++)
	  for (int b = 0; b < 559; b++)
	    for (int a = 0; a < 585; a++)
	    {
	      
	      float var_a=A[a][b][c]/0.491;
	      float var_b=A[a+5][b+1][c+2]*0.34;
	    }

    return 0;
}