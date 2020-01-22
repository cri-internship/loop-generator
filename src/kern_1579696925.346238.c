#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(210, 960, "ones");
	double **D = create_two_dim_double(230, 250, "ones");
	double ***A = create_three_dim_double(350, 470, 290, "ones");
	double ***B = create_three_dim_double(210, 120, 50, "ones");

	for (int a = 3; a < 210; a++)
	{
	  
	    C[a][a]=C[a-2][a-3]+D[a][a]-B[a][a][a];
	}

    return 0;
}