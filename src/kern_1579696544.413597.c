#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(840, 30, "zeros");
	int *A = create_one_dim_int(880, "zeros");
	int ***C = create_three_dim_int(440, 550, 560, "zeros");
	int **B = create_two_dim_int(850, 290, "zeros");

	for (int a = 0; a < 845; a++)
	{
	  
	    B[a][a]=B[a+4][a+5]-49;
	  
	    A[a]=D[a][a];
	    A[a]=B[a][a]*C[a][a][a]/B[a][a];
	}

    return 0;
}