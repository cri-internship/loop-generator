#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(970, 300, "zeros");
	float **A = create_two_dim_float(770, 300, "zeros");

	for (int c = 0; c < 295; c++)
	  for (int b = 0; b < 970; b++)
	    for (int a = 0; a < 970; a++)
	    {
	      
	      B[a][b]=B[a][b]+A[a][b];
	      A[a][b]=B[a][b+5]+A[a][b];
	    }

    return 0;
}