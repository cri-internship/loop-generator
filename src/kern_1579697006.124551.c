#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(1000, "zeros");
	int ***A = create_three_dim_int(1000, 450, 630, "zeros");
	int **C = create_two_dim_int(350, 660, "zeros");

	for (int c = 3; c < 1000; c++)
	  for (int b = 3; b < 1000; b++)
	    for (int a = 3; a < 1000; a++)
	    {
	      
	      B[a]=B[a]/C[a][b];
	      C[a][b]=B[a-3]/A[a][b][c];
	    }

    return 0;
}