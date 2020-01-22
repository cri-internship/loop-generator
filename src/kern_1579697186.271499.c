#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(210, 290, 270, "zeros");

	for (int c = 0; c < 270; c++)
	  for (int b = 4; b < 290; b++)
	    for (int a = 5; a < 210; a++)
	    {
	      
	      double var_a=A[a][b][c]*0.227;
	      double var_b=A[a-5][b-4][c]-0.654;
	    }

    return 0;
}