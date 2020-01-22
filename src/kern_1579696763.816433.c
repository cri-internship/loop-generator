#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(10, 870, "ones");
	int ***A = create_three_dim_int(550, 560, 830, "ones");
	int *C = create_one_dim_int(70, "ones");

	for (int a = 5; a < 10; a++)
	{
	  
	    A[a][a][a]=A[a-3][a-5][a-4]-C[a];
	  
	    C[a]=B[a][a]+A[a][a][a];
	    C[a]=C[a]/B[a][a];
	  
	    A[a][a][a]=A[a][a-5][a-4]*C[a];
	  
	    int var_a=C[a]/4;
	    C[a]=0;
	  
	    A[a][a][a]=A[a+5][a+4][a+1]-3;
	  
	    A[a][a][a]=B[a][a]-0;
	    B[a][a]=B[a-5][a]*A[a][a][a];
	}

    return 0;
}