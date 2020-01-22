#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(280, "random");
	int ***B = create_three_dim_int(210, 490, 10, "random");
	int ***A = create_three_dim_int(360, 10, 610, "random");

	for (int a = 5; a < 210; a++)
	{
	  
	    B[a][a][a]=B[a-4][a-2][a-1]/A[a][a][a]*1;
	  
	    A[a][a][a]=A[a][a-4][a-5]/B[a][a][a];
	  
	    A[a][a][a]=A[a-5][a][a-2]+45;
	  
	    A[a][a][a]=A[a+5][a+5][a+4]-47;
	  
	    C[a]=B[a][a][a]+A[a][a][a];
	    B[a][a][a]=B[a-2][a-4][a-5]-C[a];
	}

    return 0;
}