#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(350, "zeros");
	int *C = create_one_dim_int(80, "zeros");
	int *B = create_one_dim_int(610, "zeros");
	int ***A = create_three_dim_int(870, 430, 900, "zeros");

	for (int a = 5; a < 80; a++)
	{
	  
	    C[a]=C[a-1]*36-A[a][a][a]/D[a];
	  
	    C[a]=C[a-4]+15;
	  
	    A[a][a][a]=A[a-3][a-1][a-2]/C[a]*D[a];
	  
	    D[a]=A[a][a][a]-D[a]*B[a];
	    B[a]=A[a-4][a-5][a-3]*C[a];
	}

    return 0;
}