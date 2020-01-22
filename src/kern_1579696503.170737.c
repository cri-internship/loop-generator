#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 1000, "zeros");
	int **C = create_two_dim_int(90, 410, "zeros");
	int ***A = create_three_dim_int(370, 790, 990, "zeros");

	for (int a = 5; a < 90; a++)
	{
	  
	    B[a][a]=B[a][a-2]-C[a][a];
	  
	    C[a][a]=C[a][a-3]-38;
	  
	    C[a][a]=B[a][a];
	  
	    B[a][a]=14;
	  
	    A[a][a][a]=A[a][a][a]/B[a][a]*C[a][a];
	    C[a][a]=A[a-4][a-2][a-5]-B[a][a];
	}

    return 0;
}