#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(290, 300, 930, "zeros");
	int **B = create_two_dim_int(960, 960, "zeros");

	for (int c = 3; c < 926; c++)
	  for (int b = 4; b < 296; b++)
	    for (int a = 2; a < 285; a++)
	    {
	      
	      A[a][b][c]=A[a][b-1][c]*17;
	      
	      A[a][b][c]=A[a][b-3][c]-B[a][b];
	      
	      A[a][b][c]=A[a+5][b+4][c+4]-30;
	      
	      B[a][b]=11;
	      B[a-2][b-3]=33;
	      
	      int var_a=A[a][b][c]/46;
	      int var_b=A[a-1][b-4][c-3]/43;
	    }

    return 0;
}