#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(820, 190, 70, "ones");
	double **B = create_two_dim_double(680, 940, "ones");

	for (int a = 0; a < 676; a++)
	{
	  
	    B[a][a]=B[a+4][a+2]/0.243;
	}

    return 0;
}