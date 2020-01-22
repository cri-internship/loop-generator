#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(990, 220, 760, "zeros");
	float **D = create_two_dim_float(810, 920, "zeros");
	float ***A = create_three_dim_float(570, 740, 270, "zeros");
	float **E = create_two_dim_float(900, 910, "zeros");
	float **C = create_two_dim_float(820, 320, "zeros");

	for (int a = 4; a < 820; a++)
	{
	  
	    E[a][a]=E[a-4][a-3]+0.617;
	  
	    C[a][a]=E[a][a];
	    E[a][a]=C[a][a]-D[a][a]*A[a][a][a]/0.659+A[a][a][a];
	}

    return 0;
}