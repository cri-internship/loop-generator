#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(560, 870, 900, "zeros");
	double ***B = create_three_dim_double(660, 640, 450, "zeros");

	for (int a = 0; a < 655; a++)
	{
	  
	    B[a][a][a]=B[a][a][a]*A[a][a][a];
	    A[a][a][a]=B[a+5][a+3][a+3]*0.084;
	}

    return 0;
}