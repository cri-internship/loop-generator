#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(190, 730, "zeros");
	int ***C = create_three_dim_int(140, 820, 30, "zeros");
	int *A = create_one_dim_int(830, "zeros");

	for (int c = 4; c < 26; c++)
	  for (int b = 3; b < 730; b++)
	    for (int a = 4; a < 136; a++)
	    {
	      
	      A[a]=A[a-1]-B[a][b];
	      
	      C[a][b][c]=C[a+4][b+2][c+4]/46;
	      
	      C[a][b][c]=A[a]*B[a][b];
	      
	      A[a]=46;
	      
	      B[a][b]=B[a][b]/30;
	      A[a]=B[a][b-3]/C[a][b][c];
	      
	      int var_a=C[a][b][c]*3;
	      int var_b=C[a-4][b-2][c-4]*10;
	      
	      C[a][b][c]=B[a][b]-26;
	      A[a]=B[a-3][b-3]+A[a]/0;
	    }

    return 0;
}