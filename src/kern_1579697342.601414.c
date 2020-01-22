#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(470, 20, 270, "random");

	for (int c = 0; c < 266; c++)
	  for (int b = 0; b < 16; b++)
	    for (int a = 0; a < 468; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+4][c+4]/0.302;
	    }

    return 0;
}