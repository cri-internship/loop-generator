#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(50, 460, "zeros");
	double *C = create_one_dim_double(210, "zeros");
	double *B = create_one_dim_double(670, "zeros");
	double ***A = create_three_dim_double(690, 20, 760, "zeros");
	double ***E = create_three_dim_double(590, 150, 540, "zeros");

	for (int a = 4; a < 590; a++)
	{
	  
	    E[a][a][a]=0.743;
	    E[a][a-4][a]=0.478;
	}

    return 0;
}