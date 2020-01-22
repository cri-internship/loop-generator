#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(660, 700, "zeros");
	int ***A = create_three_dim_int(530, 180, 130, "zeros");
	int *B = create_one_dim_int(430, "zeros");

	for (int a = 5; a < 525; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-2][a-1]*2;
	  
	    A[a][a][a]=A[a+5][a+2][a+2]/41+B[a];
	}

    return 0;
}