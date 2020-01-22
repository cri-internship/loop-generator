#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(540, 360, 320, "zeros");
	double **C = create_two_dim_double(360, 220, "zeros");
	double *B = create_one_dim_double(910, "zeros");
	double *D = create_one_dim_double(970, "zeros");
	double ***E = create_three_dim_double(230, 180, 510, "zeros");

	for (int a = 0; a < 226; a++)
	{
	  
	    E[a][a][a]=0.856;
	    E[a+2][a+4][a+4]=0.151;
	}

    return 0;
}