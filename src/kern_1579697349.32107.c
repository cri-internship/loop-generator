#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(10, "ones");
	int *D = create_one_dim_int(880, "ones");
	int *E = create_one_dim_int(480, "ones");
	int ***B = create_three_dim_int(910, 850, 360, "ones");
	int ***C = create_three_dim_int(90, 270, 440, "ones");

	for (int a = 3; a < 480; a++)
	{
	  
	    int var_a=E[a]/31;
	    int var_b=E[a]/33;
	  
	    D[a]=E[a]*B[a][a][a];
	    A[a]=E[a-3]/A[a]*D[a];
	}

    return 0;
}