#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(730, 530, 760, "ones");
	int **A = create_two_dim_int(460, 550, "ones");
	int **B = create_two_dim_int(190, 30, "ones");

	for (int a = 4; a < 190; a++)
	{
	  
	    B[a][a]=B[a-1][a-4]+C[a][a][a]-A[a][a];
	  
	    A[a][a]=A[a+3][a]/19;
	  
	    A[a][a]=A[a+4][a+5]-B[a][a]/C[a][a][a];
	  
	    A[a][a]=A[a+5][a+2]*B[a][a];
	}

    return 0;
}