#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(170, "ones");
	int *C = create_one_dim_int(400, "ones");
	int *B = create_one_dim_int(480, "ones");
	int *D = create_one_dim_int(720, "ones");

	for (int a = 0; a < 168; a++)
	{
	  
	    C[a]=C[a+2]+17;
	  
	    A[a]=A[a+2]/48;
	}

    return 0;
}