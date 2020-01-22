#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(70, 240, 730, "random");
	double ***A = create_three_dim_double(340, 660, 980, "random");

	for (int a = 5; a < 70; a++)
	{
	  
	    A[a][a][a]=A[a-4][a-3][a-3]-0.868;
	  
	    B[a][a][a]=B[a-5][a-5][a-5]+0.745;
	  
	    A[a][a][a]=B[a][a][a];
	}

    return 0;
}