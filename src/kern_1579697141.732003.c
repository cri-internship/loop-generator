#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(10, 10, 120, "zeros");
	float **B = create_two_dim_float(440, 960, "zeros");

	for (int c = 1; c < 959; c++)
	  for (int b = 3; b < 436; b++)
	    for (int a = 3; a < 436; a++)
	    {
	      
	      B[a][b]=B[a-3][b-1]+0.068;
	      
	      B[a][b]=B[a+4][b+1]-A[a][b][c];
	    }

    return 0;
}