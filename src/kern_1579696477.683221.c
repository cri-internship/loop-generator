#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(620, 380, 590, "zeros");

	for (int c = 0; c < 586; c++)
	  for (int b = 0; b < 375; b++)
	    for (int a = 0; a < 615; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+5][c+4]-0.219;
	      
	      double var_a=A[a][b][c]*0.892;
	      double var_b=A[a+4][b+2][c+4]+0.77;
	    }

    return 0;
}