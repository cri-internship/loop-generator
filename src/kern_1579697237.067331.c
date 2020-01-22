#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(650, "zeros");
	int ***C = create_three_dim_int(630, 170, 330, "zeros");
	int ***B = create_three_dim_int(650, 550, 500, "zeros");

	for (int c = 3; c < 327; c++)
	  for (int b = 3; b < 167; b++)
	    for (int a = 5; a < 626; a++)
	    {
	      
	      A[a]=A[a-2]*39;
	      
	      A[a]=A[a-3]+C[a][b][c];
	      
	      C[a][b][c]=38;
	      C[a+4][b+3][c+3]=20;
	      
	      B[a][b][c]=B[a][b][c]*A[a]+A[a];
	      C[a][b][c]=B[a+3][b+4][c+2]/C[a][b][c];
	      
	      int var_a=C[a][b][c]/17;
	      int var_b=C[a-5][b-3][c-3]-21;
	    }

    return 0;
}