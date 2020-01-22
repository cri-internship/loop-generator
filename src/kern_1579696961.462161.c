#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(290, 320, "random");
	int **B = create_two_dim_int(480, 600, "random");
	int *A = create_one_dim_int(560, "random");

	for (int a = 2; a < 288; a++)
	{
	  
	    C[a][a]=C[a][a-2]+B[a][a]-A[a];
	  
	    B[a][a]=B[a][a+5]+C[a][a];
	  
	    A[a]=B[a][a]+47;
	    A[a+5]=B[a][a]+C[a][a];
	  
	    C[a][a]=10;
	  
	    int var_a=B[a][a]+36;
	    int var_b=B[a][a+1]-20;
	}

    return 0;
}