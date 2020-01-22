#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(620, 800, 770, "random");
	int **C = create_two_dim_int(10, 220, "random");
	int *B = create_one_dim_int(490, "random");

	for (int a = 2; a < 7; a++)
	{
	  
	    B[a]=A[a][a][a]-28;
	    B[a]=B[a]/C[a][a];
	  
	    C[a][a]=C[a+3][a+2]-4;
	  
	    B[a]=B[a+4]+23;
	  
	    B[a]=B[a+5]*13;
	  
	    A[a][a][a]=A[a][a][a]/B[a];
	    C[a][a]=A[a-2][a-2][a]-C[a][a];
	}

    return 0;
}