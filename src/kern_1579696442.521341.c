#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(750, "random");
	int ***D = create_three_dim_int(770, 1000, 910, "random");
	int *C = create_one_dim_int(470, "random");
	int ***A = create_three_dim_int(480, 400, 830, "random");

	for (int a = 0; a < 470; a++)
	{
	  
	    B[a]=C[a]/D[a][a][a]+B[a]-A[a][a][a];
	    C[a]=D[a][a][a];
	  
	    A[a][a][a]=B[a]*17;
	}

    return 0;
}