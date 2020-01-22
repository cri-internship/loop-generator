#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(810, 820, 30, "random");
	double ***C = create_three_dim_double(340, 30, 760, "random");
	double **D = create_two_dim_double(840, 820, "random");
	double *B = create_one_dim_double(460, "random");

	for (int a = 4; a < 340; a++)
	{
	  
	    D[a][a]=D[a-2][a]+0.408;
	  
	    C[a][a][a]=C[a][a-3][a]*B[a]/D[a][a]-0.874;
	  
	    A[a][a][a]=0.985;
	    A[a-3][a-4][a-2]=0.481;
	}

    return 0;
}