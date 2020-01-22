#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(110, 850, "zeros");
	double ***A = create_three_dim_double(640, 750, 770, "zeros");
	double **B = create_two_dim_double(450, 890, "zeros");

	for (int a = 0; a < 635; a++)
	{
	  
	    A[a][a][a]=A[a+1][a+5][a+2]-0.534;
	}

    return 0;
}