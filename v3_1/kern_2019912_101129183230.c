#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(50, 50, "random");
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 49; b++)
	    for (int a = 0; a < 48; a++)
	    {
	      
	      C[a+2][b+1][c]=B[a][b]+A[a];
	      A[a]=C[a+2][b+1][c]-C[a-4][b+1][c]*A[a]/B[a][b];
	    }

    return 0;
}