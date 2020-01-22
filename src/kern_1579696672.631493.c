#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(60, "ones");
	int *A = create_one_dim_int(650, "ones");
	int ***D = create_three_dim_int(790, 120, 80, "ones");
	int ***B = create_three_dim_int(40, 670, 950, "ones");

	for (int c = 2; c < 80; c++)
	  for (int b = 4; b < 116; b++)
	    for (int a = 5; a < 649; a++)
	    {
	      
	      A[a]=A[a+1]/B[a][b][c]-C[a];
	      
	      D[a][b][c]=D[a+1][b+4][c]*30-C[a]+A[a];
	      
	      D[a][b][c]=7;
	    }

    return 0;
}