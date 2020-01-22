#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 840, "zeros");
	double ***B = create_three_dim_double(190, 780, 40, "zeros");
	double **C = create_two_dim_double(610, 570, "zeros");

	for (int a = 4; a < 188; a++)
	{
	  
	    C[a][a]=C[a][a-4]-0.061;
	  
	    C[a][a]=0.576;
	  
	    B[a][a][a]=0.443;
	    B[a+1][a][a+2]=0.824;
	}

    return 0;
}