#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(910, 590, 10, "zeros");
	double ***A = create_three_dim_double(430, 750, 980, "zeros");

	for (int a = 5; a < 905; a++)
	{
	  
	    B[a][a][a]=B[a+5][a+4][a+4]-0.491;
	  
	    B[a][a][a]=A[a][a][a];
	  
	    A[a][a][a]=B[a][a][a]/A[a][a][a];
	    B[a][a][a]=B[a][a-2][a-1]*A[a][a][a];
	}

    return 0;
}