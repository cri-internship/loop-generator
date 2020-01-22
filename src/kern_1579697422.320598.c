#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(60, 400, 330, "zeros");

	for (int c = 0; c < 329; c++)
	  for (int b = 0; b < 396; b++)
	    for (int a = 0; a < 60; a++)
	    {
	      
	      A[a][b][c]=0.705;
	      A[a][b+4][c+1]=0.991;
	    }

    return 0;
}