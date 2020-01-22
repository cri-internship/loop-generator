#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(770, 380, "ones");
	float ***A = create_three_dim_float(60, 260, 900, "ones");

	for (int c = 0; c < 900; c++)
	  for (int b = 0; b < 255; b++)
	    for (int a = 0; a < 57; a++)
	    {
	      
	      A[a][b][c]=B[a][b];
	      A[a+3][b+5][c]=B[a][b];
	    }

    return 0;
}