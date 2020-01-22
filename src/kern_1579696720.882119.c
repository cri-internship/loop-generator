#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(90, 940, "ones");
	int ***A = create_three_dim_int(220, 20, 990, "ones");
	int ***C = create_three_dim_int(790, 40, 800, "ones");

	for (int c = 0; c < 800; c++)
	  for (int b = 0; b < 20; b++)
	    for (int a = 0; a < 218; a++)
	    {
	      
	      C[a][b][c]=50;
	      C[a][b+5][c]=35;
	      
	      B[a][b]=A[a][b][c]+16;
	      A[a][b][c]=A[a+2][b][c+2]+C[a][b][c]*B[a][b];
	    }

    return 0;
}