#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(1000, "random");
	int *A = create_one_dim_int(540, "random");

	for (int a = 4; a < 536; a++)
	{
	  
	    B[a]=B[a-1]-A[a];
	  
	    A[a]=A[a-3]-B[a];
	  
	    A[a]=A[a+1]/32;
	  
	    B[a]=29;
	  
	    A[a]=A[a]/B[a];
	    B[a]=A[a-4]*B[a];
	  
	    A[a]=A[a]+30;
	    B[a]=A[a+4]/B[a];
	}

    return 0;
}