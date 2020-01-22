#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(600, 840, 210, "random");
	int *A = create_one_dim_int(900, "random");

	for (int a = 5; a < 600; a++)
	{
	  
	    B[a][a][a]=B[a][a-2][a-2]/A[a];
	  
	    A[a]=B[a][a][a]*A[a];
	    B[a][a][a]=B[a-5][a][a-4]-28;
	  
	    B[a][a][a]=A[a]*30;
	    B[a][a][a]=A[a+4]*B[a][a][a];
	}

    return 0;
}