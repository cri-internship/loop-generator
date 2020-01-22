#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(140, "random");
	int *A = create_one_dim_int(80, "random");
	int *C = create_one_dim_int(590, "random");

	for (int a = 4; a < 78; a++)
	{
	  
	    B[a]=B[a-4]-A[a]+C[a];
	  
	    C[a]=35;
	    C[a+2]=18;
	  
	    int var_a=A[a]*11;
	    int var_b=A[a+2]+42;
	}

    return 0;
}