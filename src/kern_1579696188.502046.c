#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(690, 120, "zeros");
	double ***B = create_three_dim_double(690, 180, 610, "zeros");
	double **C = create_two_dim_double(30, 440, "zeros");

	for (int a = 5; a < 25; a++)
	{
	  
	    B[a][a][a]=B[a-5][a-2][a-5]-0.801;
	  
	    C[a][a]=0.733;
	    C[a+5][a+5]=0.732;
	}

    return 0;
}