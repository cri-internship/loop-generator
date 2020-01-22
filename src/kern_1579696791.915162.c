#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(800, "random");
	int ***A = create_three_dim_int(710, 360, 400, "random");
	int *C = create_one_dim_int(400, "random");

	for (int a = 5; a < 400; a++)
	{
	  
	    A[a][a][a]=A[a-5][a-5][a-1]-C[a]*B[a];
	  
	    C[a]=C[a-1]/7;
	  
	    C[a]=B[a]/A[a][a][a];
	    A[a][a][a]=B[a-3]*A[a][a][a];
	}

    return 0;
}