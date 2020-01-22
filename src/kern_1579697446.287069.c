#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(780, 60, 250, "zeros");

	for (int c = 0; c < 245; c++)
	  for (int b = 0; b < 57; b++)
	    for (int a = 0; a < 775; a++)
	    {
	      
	      A[a][b][c]=A[a+5][b+3][c+5]-0.824;
	    }

    return 0;
}