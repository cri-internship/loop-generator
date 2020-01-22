#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(400, 140, 810, "zeros");
	int *B = create_one_dim_int(290, "zeros");
	int *A = create_one_dim_int(690, "zeros");
	int **D = create_two_dim_int(730, 780, "zeros");

	for (int a = 0; a < 687; a++)
	{
	  
	    A[a]=A[a+3]+6;
	  
	    D[a][a]=D[a+5][a+3]*40;
	}

    return 0;
}