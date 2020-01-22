#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(930, "zeros");
	int ***A = create_three_dim_int(260, 630, 670, "zeros");
	int ***B = create_three_dim_int(970, 210, 230, "zeros");

	for (int c = 4; c < 225; c++)
	  for (int b = 5; b < 209; b++)
	    for (int a = 4; a < 967; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-1][c-4]+31;
	      
	      B[a][b][c]=47;
	      
	      C[a]=B[a][b][c]*C[a]+A[a][b][c];
	      A[a][b][c]=B[a-4][b-2][c-2]+A[a][b][c]*C[a];
	    }

    return 0;
}