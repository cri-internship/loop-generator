#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(240, 290, 1000, "ones");
	int *C = create_one_dim_int(690, "ones");
	int ***B = create_three_dim_int(480, 620, 990, "ones");
	int ***D = create_three_dim_int(780, 320, 990, "ones");

	for (int c = 3; c < 988; c++)
	  for (int b = 1; b < 318; b++)
	    for (int a = 5; a < 775; a++)
	    {
	      
	      D[a][b][c]=D[a-5][b-1][c-3]-C[a]/B[a][b][c];
	      
	      A[a][b][c]=D[a][b][c]+A[a][b][c];
	      D[a][b][c]=D[a+5][b+2][c+2]-26;
	    }

    return 0;
}