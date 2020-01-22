#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(200, 430, 910, "ones");
	int ***A = create_three_dim_int(800, 690, 380, "ones");
	int **C = create_two_dim_int(240, 110, "ones");

	for (int c = 0; c < 380; c++)
	  for (int b = 2; b < 110; b++)
	    for (int a = 2; a < 240; a++)
	    {
	      
	      C[a][b]=C[a-2][b]/A[a][b][c]*B[a][b][c];
	      
	      int var_a=A[a][b][c]*26;
	      int var_b=A[a-2][b-2][c]*34;
	    }

    return 0;
}