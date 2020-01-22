#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(380, 900, 50, "zeros");
	int *B = create_one_dim_int(300, "zeros");
	int ***A = create_three_dim_int(260, 520, 30, "zeros");
	int ***D = create_three_dim_int(310, 530, 230, "zeros");

	for (int c = 1; c < 227; c++)
	  for (int b = 1; b < 526; b++)
	    for (int a = 2; a < 310; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-1][c-1]*39;
	      
	      D[a][b][c]=49/A[a][b][c]*C[a][b][c];
	    }

    return 0;
}