#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(670, 520, "zeros");
	int ***D = create_three_dim_int(880, 190, 420, "zeros");
	int *C = create_one_dim_int(190, "zeros");
	int *B = create_one_dim_int(820, "zeros");

	for (int c = 2; c < 420; c++)
	  for (int b = 4; b < 190; b++)
	    for (int a = 2; a < 188; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-4][c]*A[a][b];
	      
	      A[a][b]=A[a+2][b+4]*2;
	      
	      D[a][b][c]=B[a]/C[a];
	      
	      int var_a=C[a]/47;
	      int var_b=C[a+2]+11;
	    }

    return 0;
}