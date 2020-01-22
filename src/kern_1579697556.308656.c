#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(240, "ones");
	double ***A = create_three_dim_double(440, 330, 130, "ones");

	for (int c = 1; c < 130; c++)
	  for (int b = 3; b < 330; b++)
	    for (int a = 5; a < 240; a++)
	    {
	      
	      B[a]=B[a-5]+0.513;
	      
	      A[a][b][c]=A[a][b-3][c-1]-0.069;
	    }

    return 0;
}