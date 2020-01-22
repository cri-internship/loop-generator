#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(740, 250, 260, "random");
	double ***B = create_three_dim_double(640, 460, 720, "random");
	double *A = create_one_dim_double(530, "random");

	for (int a = 0; a < 737; a++)
	{
	  
	    C[a][a][a]=C[a+2][a][a+1]*B[a][a][a]/A[a];
	  
	    C[a][a][a]=C[a+3][a+1][a+1]-B[a][a][a]+A[a];
	}

    return 0;
}