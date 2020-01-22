#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(550, "random");
	int ***B = create_three_dim_int(60, 450, 650, "random");

	for (int a = 5; a < 60; a++)
	{
	  
	    A[a]=A[a-5]/B[a][a][a];
	  
	    B[a][a][a]=B[a][a-2][a-4]-A[a];
	}

    return 0;
}