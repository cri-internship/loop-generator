#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(1000, 720, 800, "ones");

	for (int c = 4; c < 795; c++)
	  for (int b = 0; b < 720; b++)
	    for (int a = 3; a < 998; a++)
	    {
	      
	      A[a][b][c]=0.188;
	      A[a+2][b][c+5]=0.501;
	      
	      double var_a=A[a][b][c]/0.341;
	      double var_b=A[a-3][b][c-4]+0.602;
	    }

    return 0;
}