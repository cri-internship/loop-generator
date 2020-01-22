#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(560, "zeros");
	int *D = create_one_dim_int(270, "zeros");
	int ***E = create_three_dim_int(350, 110, 710, "zeros");
	int *A = create_one_dim_int(350, "zeros");
	int ***B = create_three_dim_int(860, 810, 730, "zeros");

	for (int a = 5; a < 270; a++)
	{
	  
	    A[a]=A[a-2]-36;
	  
	    B[a][a][a]=B[a-5][a][a-5]/D[a];
	  
	    D[a]=A[a]/21;
	    D[a]=D[a]*E[a][a][a];
	  
	    E[a][a][a]=12;
	    E[a-5][a-5][a-2]=49;
	}

    return 0;
}