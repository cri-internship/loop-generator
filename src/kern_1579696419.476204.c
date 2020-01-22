#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(80, "ones");
	double ***D = create_three_dim_double(230, 700, 330, "ones");
	double **C = create_two_dim_double(520, 570, "ones");
	double ***B = create_three_dim_double(650, 750, 480, "ones");

	for (int a = 5; a < 650; a++)
	{
	  
	    B[a][a][a]=0.677;
	    B[a-5][a-1][a-1]=0.415;
	}

    return 0;
}