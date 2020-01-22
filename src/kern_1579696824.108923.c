#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(80, "zeros");
	int ***D = create_three_dim_int(160, 670, 780, "zeros");
	int *C = create_one_dim_int(700, "zeros");
	int ***A = create_three_dim_int(810, 270, 810, "zeros");

	for (int a = 5; a < 160; a++)
	{
	  
	    D[a][a][a]=D[a-5][a-5][a-2]+46;
	  
	    C[a]=C[a-3]+29;
	  
	    A[a][a][a]=50;
	    A[a+2][a+4][a]=37;
	  
	    A[a][a][a]=20;
	}

    return 0;
}