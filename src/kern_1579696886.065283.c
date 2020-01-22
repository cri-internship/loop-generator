#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(290, 390, "random");
	int ***C = create_three_dim_int(220, 810, 190, "random");
	int **B = create_two_dim_int(790, 870, "random");

	for (int c = 5; c < 186; c++)
	  for (int b = 5; b < 808; b++)
	    for (int a = 5; a < 219; a++)
	    {
	      
	      C[a][b][c]=C[a-5][b][c-5]-B[a][b];
	      
	      B[a][b]=B[a+2][b+4]/A[a][b]+10;
	      
	      C[a][b][c]=B[a][b];
	    }

    return 0;
}