#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(60, 830, "zeros");
	int **C = create_two_dim_int(190, 610, "zeros");
	int ***D = create_three_dim_int(270, 510, 310, "zeros");
	int *A = create_one_dim_int(160, "zeros");

	for (int c = 4; c < 306; c++)
	  for (int b = 3; b < 508; b++)
	    for (int a = 2; a < 56; a++)
	    {
	      
	      C[a][b]=C[a+1][b+3]+39;
	      
	      B[a][b]=B[a+4][b+3]+14;
	      
	      D[a][b][c]=D[a][b+2][c+4]/A[a]-C[a][b];
	      
	      int var_a=A[a]*29;
	      int var_b=A[a+1]-10;
	      
	      int var_c=D[a][b][c]/38;
	      int var_d=D[a-2][b-3][c-4]-14;
	    }

    return 0;
}