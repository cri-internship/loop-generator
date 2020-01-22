#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(690, 710, 890, "random");
	double ***C = create_three_dim_double(680, 250, 540, "random");
	double **B = create_two_dim_double(10, 30, "random");
	double ***D = create_three_dim_double(80, 640, 570, "random");

	for (int a = 4; a < 676; a++)
	{
	  
	    C[a][a][a]=C[a-4][a-1][a-2]+B[a][a]*A[a][a][a];
	  
	    C[a][a][a]=C[a+3][a+4][a+2]-0.964;
	}

    return 0;
}