#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(450, 790, 350, "zeros");
	double **A = create_two_dim_double(220, 100, "zeros");
	double ***B = create_three_dim_double(530, 670, 370, "zeros");
	double **D = create_two_dim_double(220, 370, "zeros");

	for (int a = 0; a < 525; a++)
	{
	  
	    B[a][a][a]=0.676;
	    B[a+5][a+3][a+5]=0.731;
	}

    return 0;
}