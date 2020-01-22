#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(650, 20, "random");
	int **B = create_two_dim_int(880, 640, "random");

	for (int a = 5; a < 645; a++)
	{
	  
	    A[a][a]=A[a-2][a-4]/B[a][a];
	  
	    B[a][a]=B[a-5][a-2]-A[a][a];
	  
	    A[a][a]=A[a-5][a-2]+9;
	  
	    A[a][a]=A[a][a+5]+B[a][a];
	  
	    B[a][a]=B[a][a+4]+31;
	  
	    B[a][a]=B[a][a]-A[a][a];
	    A[a][a]=B[a][a-4]*A[a][a];
	}

    return 0;
}