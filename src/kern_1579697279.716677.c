#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(80, "random");
	float **A = create_two_dim_float(710, 960, "random");
	float ***E = create_three_dim_float(190, 770, 900, "random");
	float **D = create_two_dim_float(570, 930, "random");
	float **B = create_two_dim_float(540, 510, "random");

	for (int a = 2; a < 78; a++)
	{
	  
	    B[a][a]=B[a-1][a-2]*E[a][a][a]+A[a][a]-C[a]/D[a][a];
	  
	    E[a][a][a]=E[a+5][a+4][a+4]/0.798;
	  
	    C[a]=0.017;
	    C[a+2]=0.351;
	}

    return 0;
}