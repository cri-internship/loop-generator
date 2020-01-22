#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(470, 790, "ones");
	double ***A = create_three_dim_double(140, 40, 540, "ones");

	for (int c = 0; c < 787; c++)
	  for (int b = 0; b < 469; b++)
	    for (int a = 0; a < 469; a++)
	    {
	      
	      B[a][b]=B[a+1][b+3]*A[a][b][c];
	    }

    return 0;
}