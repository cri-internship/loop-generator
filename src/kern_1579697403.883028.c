#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(770, 680, "random");
	int *B = create_one_dim_int(570, "random");
	int **C = create_two_dim_int(120, 570, "random");

	for (int a = 4; a < 115; a++)
	{
	  
	    C[a][a]=C[a+5][a+3]-49;
	  
	    C[a][a]=C[a+1][a]-4;
	  
	    B[a]=C[a][a]*B[a]-A[a][a];
	    A[a][a]=C[a][a-4]*A[a][a];
	}

    return 0;
}