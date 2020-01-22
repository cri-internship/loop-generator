#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(130, 320, 710, "ones");

	for (int c = 0; c < 706; c++)
	  for (int b = 0; b < 315; b++)
	    for (int a = 0; a < 125; a++)
	    {
	      
	      float var_a=A[a][b][c]-0.613;
	      float var_b=A[a+5][b+5][c+4]-0.076;
	    }

    return 0;
}