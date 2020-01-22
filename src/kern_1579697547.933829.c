#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(620, "random");
	int ***A = create_three_dim_int(620, 700, 120, "random");
	int *C = create_one_dim_int(210, "random");

	for (int a = 0; a < 206; a++)
	{
	  
	    C[a]=C[a+4]/14;
	  
	    B[a]=A[a][a][a]*B[a];
	    A[a][a][a]=A[a+5][a+1][a+3]/C[a]-C[a];
	}

    return 0;
}