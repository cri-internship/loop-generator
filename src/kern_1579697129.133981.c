#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(170, "zeros");
	int **A = create_two_dim_int(680, 310, "zeros");

	for (int a = 1; a < 170; a++)
	{
	  
	    A[a][a]=A[a+2][a+2]-18;
	  
	    A[a][a]=12;
	  
	    A[a][a]=B[a]*A[a][a];
	    B[a]=B[a]*A[a][a];
	}

    return 0;
}