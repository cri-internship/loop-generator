#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "ones");
	int ***B = create_three_dim_int(280, 40, 200, "ones");
	int ***C = create_three_dim_int(540, 430, 570, "ones");

	for (int c = 5; c < 200; c++)
	  for (int b = 3; b < 35; b++)
	    for (int a = 5; a < 278; a++)
	    {
	      
	      B[a][b][c]=C[a][b][c];
	      B[a+2][b+5][c]=A[a]/C[a][b][c];
	      
	      A[a]=C[a][b][c]-B[a][b][c]/A[a];
	      B[a][b][c]=C[a-2][b-1][c-1]*B[a][b][c];
	      
	      int var_a=B[a][b][c]/30;
	      int var_b=B[a-4][b-3][c-5]/46;
	      
	      int var_c=B[a][b][c]+46;
	      int var_d=B[a-5][b-3][c-4]+21;
	    }

    return 0;
}