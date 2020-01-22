#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(400, "random");
	int ***C = create_three_dim_int(790, 470, 350, "random");
	int *B = create_one_dim_int(550, "random");

	for (int a = 2; a < 400; a++)
	{
	  
	    B[a]=B[a-2]-18;
	  
	    C[a][a][a]=B[a]+A[a];
	    C[a+2][a+4][a+1]=A[a]/B[a];
	}

    return 0;
}