#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(920, 760, 170, "ones");
	double **B = create_two_dim_double(880, 270, "ones");

	for (int c = 4; c < 265; c++)
	  for (int b = 4; b < 880; b++)
	    for (int a = 4; a < 880; a++)
	    {
	      
	      B[a][b]=B[a-4][b-4]*0.934;
	      
	      B[a][b]=B[a][b+5]+0.421;
	    }

    return 0;
}