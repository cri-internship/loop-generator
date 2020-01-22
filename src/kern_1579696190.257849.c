#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(990, 100, "zeros");
	float ***A = create_three_dim_float(320, 330, 660, "zeros");

	for (int c = 0; c < 98; c++)
	  for (int b = 0; b < 985; b++)
	    for (int a = 0; a < 985; a++)
	    {
	      
	      B[a][b]=B[a+5][b+2]*A[a][b][c];
	    }

    return 0;
}