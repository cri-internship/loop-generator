#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 860, 110, "ones");
	double ***B = create_three_dim_double(680, 70, 10, "ones");

	for (int c = 4; c < 5; c++)
	  for (int b = 3; b < 68; b++)
	    for (int a = 3; a < 677; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b][c-4]/0.555;
	      
	      B[a][b][c]=B[a+3][b+2][c+4]/0.637;
	      
	      double var_a=B[a][b][c]/0.548;
	      double var_b=B[a-3][b-3][c-1]/0.218;
	    }

    return 0;
}