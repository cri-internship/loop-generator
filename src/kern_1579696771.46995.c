#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(190, 580, 520, "zeros");
	int **A = create_two_dim_int(390, 570, "zeros");

	for (int a = 0; a < 187; a++)
	{
	  
	    A[a][a]=A[a+1][a+1]+34;
	  
	    A[a][a]=A[a+1][a+5]/B[a][a][a];
	  
	    int var_a=B[a][a][a]+32;
	    int var_b=B[a+3][a][a]*2;
	}

    return 0;
}