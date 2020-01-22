#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(160, "random");
	int **D = create_two_dim_int(40, 420, "random");
	int **B = create_two_dim_int(530, 550, "random");
	int ***C = create_three_dim_int(690, 770, 750, "random");

	for (int c = 0; c < 156; c++)
	  for (int b = 0; b < 156; b++)
	    for (int a = 0; a < 156; a++)
	    {
	      
	      A[a]=B[a][b];
	      A[a+4]=C[a][b][c]*D[a][b];
	    }

    return 0;
}