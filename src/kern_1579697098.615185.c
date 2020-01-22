#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(420, "random");
	int **A = create_two_dim_int(730, 700, "random");

	for (int a = 4; a < 416; a++)
	{
	  
	    B[a]=B[a+4]+A[a][a];
	  
	    B[a]=B[a+2]/1;
	  
	    A[a][a]=23;
	    A[a+4][a+4]=40;
	  
	    A[a][a]=22;
	  
	    A[a][a]=B[a]+A[a][a];
	    B[a]=B[a]*A[a][a];
	}

    return 0;
}