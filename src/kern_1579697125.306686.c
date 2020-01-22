#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(800, "ones");
	int ***A = create_three_dim_int(870, 500, 730, "ones");
	int ***B = create_three_dim_int(220, 340, 400, "ones");

	for (int c = 2; c < 397; c++)
	  for (int b = 1; b < 337; b++)
	    for (int a = 2; a < 219; a++)
	    {
	      
	      C[a]=32;
	      C[a]=A[a][b][c];
	      
	      B[a][b][c]=17;
	      B[a+1][b+3][c+3]=C[a];
	      
	      B[a][b][c]=B[a][b][c]*47/A[a][b][c];
	      C[a]=B[a-2][b-1][c-2]/C[a]-A[a][b][c];
	      
	      int var_a=A[a][b][c]*47;
	      int var_b=A[a+1][b+4][c+3]*41;
	    }

    return 0;
}