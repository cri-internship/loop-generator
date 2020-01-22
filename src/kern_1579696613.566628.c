#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 570, "ones");
	int **A = create_two_dim_int(190, 420, "ones");

	for (int a = 5; a < 156; a++)
	{
	  
	    B[a][a]=B[a-2][a-5]-A[a][a];
	  
	    B[a][a]=B[a-2][a-3]-A[a][a];
	  
	    B[a][a]=B[a+2][a+4]*A[a][a];
	  
	    A[a][a]=B[a][a];
	    A[a-4][a-5]=B[a][a];
	  
	    B[a][a]=B[a][a]-12;
	    A[a][a]=B[a-5][a-4]+A[a][a];
	  
	    B[a][a]=A[a][a]/B[a][a];
	    B[a][a]=A[a+4][a+5]+B[a][a];
	}

    return 0;
}