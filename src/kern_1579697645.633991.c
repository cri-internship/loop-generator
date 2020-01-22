#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(430, "random");
	int *B = create_one_dim_int(530, "random");
	int *A = create_one_dim_int(310, "random");
	int ***D = create_three_dim_int(640, 50, 950, "random");

	for (int a = 5; a < 307; a++)
	{
	  
	    B[a]=B[a-5]/28;
	  
	    A[a]=A[a+3]/40;
	  
	    A[a]=D[a][a][a];
	  
	    C[a]=B[a]-A[a]/D[a][a][a];
	    B[a]=B[a-4]/D[a][a][a];
	}

    return 0;
}