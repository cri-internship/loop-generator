#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 330, 690, "zeros");
	int **A = create_two_dim_int(830, 10, "zeros");

	for (int c = 0; c < 686; c++)
	  for (int b = 4; b < 10; b++)
	    for (int a = 4; a < 729; a++)
	    {
	      
	      A[a][b]=A[a][b-1]/47;
	      
	      B[a][b][c]=B[a-4][b][c]/A[a][b];
	      
	      A[a][b]=43;
	      
	      int var_a=B[a][b][c]*32;
	      int var_b=B[a+1][b+5][c+4]*23;
	    }

    return 0;
}