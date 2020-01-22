#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(980, "random");
	int *C = create_one_dim_int(240, "random");
	int **B = create_two_dim_int(750, 160, "random");

	for (int a = 4; a < 235; a++)
	{
	  
	    A[a]=A[a-3]+43;
	  
	    C[a]=C[a+1]-30;
	  
	    B[a][a]=A[a];
	    B[a+2][a+5]=C[a];
	  
	    A[a]=B[a][a]+B[a][a];
	  
	    C[a]=C[a]-B[a][a];
	    B[a][a]=C[a+5]*B[a][a];
	}

    return 0;
}