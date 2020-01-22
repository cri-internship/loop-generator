#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(500, 460, 660, "zeros");
	int *C = create_one_dim_int(10, "zeros");
	int **B = create_two_dim_int(80, 870, "zeros");

	for (int c = 4; c < 657; c++)
	  for (int b = 1; b < 457; b++)
	    for (int a = 3; a < 10; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+3][c+3]+C[a];
	      
	      C[a]=12;
	      C[a-2]=33;
	      
	      int var_a=A[a][b][c]*35;
	      int var_b=A[a-3][b-1][c-4]-30;
	      
	      int var_c=A[a][b][c]/33;
	      int var_d=A[a+1][b+3][c]/43;
	    }

    return 0;
}