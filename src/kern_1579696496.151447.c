#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(900, 120, 140, "zeros");
	double **A = create_two_dim_double(230, 340, "zeros");

	for (int a = 0; a < 895; a++)
	{
	  
	    B[a][a][a]=B[a+1][a+4][a+5]*0.116;
	}

    return 0;
}