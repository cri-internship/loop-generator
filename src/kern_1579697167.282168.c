#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(810, 900, "zeros");
	int **E = create_two_dim_int(160, 970, "zeros");
	int **B = create_two_dim_int(290, 940, "zeros");
	int *C = create_one_dim_int(800, "zeros");
	int *D = create_one_dim_int(360, "zeros");

	for (int a = 5; a < 160; a++)
	{
	  
	    E[a][a]=E[a][a-5]*25;
	  
	    A[a][a]=C[a]*B[a][a];
	    A[a+1][a+1]=E[a][a]*18;
	}

    return 0;
}