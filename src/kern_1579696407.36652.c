#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(680, 360, 560, "zeros");
	double **B = create_two_dim_double(20, 300, "zeros");

	for (int c = 5; c < 300; c++)
	  for (int b = 0; b < 17; b++)
	    for (int a = 0; a < 17; a++)
	    {
	      
	      B[a][b]=B[a][b-5]-0.405;
	      
	      B[a][b]=0.41;
	    }

    return 0;
}