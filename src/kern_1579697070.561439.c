#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(750, 370, 500, "random");
	int *E = create_one_dim_int(680, "random");
	int *A = create_one_dim_int(400, "random");
	int *C = create_one_dim_int(520, "random");
	int ***B = create_three_dim_int(910, 300, 290, "random");

	for (int a = 3; a < 518; a++)
	{
	  
	    C[a]=C[a+2]+B[a][a][a]-E[a]/A[a]*D[a][a][a];
	  
	    C[a]=D[a][a][a]+C[a]-C[a];
	    D[a][a][a]=D[a-3][a-3][a]/A[a]+E[a];
	}

    return 0;
}