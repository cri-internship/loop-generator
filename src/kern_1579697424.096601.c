#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(480, 860, 420, "ones");
	int *B = create_one_dim_int(220, "ones");
	int *C = create_one_dim_int(460, "ones");

	for (int a = 5; a < 220; a++)
	{
	  
	    B[a]=B[a-2]*42;
	  
	    B[a]=B[a-5]*A[a][a][a]-16;
	  
	    A[a][a][a]=A[a-4][a-3][a-2]*2;
	}

    return 0;
}