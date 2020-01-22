#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(730, "ones");
	double ***B = create_three_dim_double(390, 380, 610, "ones");
	double ***A = create_three_dim_double(450, 880, 570, "ones");

	for (int a = 5; a < 390; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-2][a-5]*0.528;
	}

    return 0;
}