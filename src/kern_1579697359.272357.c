#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(600, 490, "ones");
	int **C = create_two_dim_int(1000, 800, "ones");
	int *D = create_one_dim_int(450, "ones");
	int ***A = create_three_dim_int(40, 840, 690, "ones");

	for (int c = 3; c < 800; c++)
	  for (int b = 5; b < 450; b++)
	    for (int a = 5; a < 450; a++)
	    {
	      
	      D[a]=29;
	      D[a-1]=32;
	      
	      B[a][b]=C[a][b]-D[a];
	      C[a][b]=C[a-5][b-3]+A[a][b][c]*B[a][b];
	    }

    return 0;
}