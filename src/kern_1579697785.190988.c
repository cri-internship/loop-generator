#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(550, 710, "ones");
	int ***C = create_three_dim_int(1000, 20, 630, "ones");
	int *D = create_one_dim_int(770, "ones");
	int ***A = create_three_dim_int(710, 10, 10, "ones");
	int ***E = create_three_dim_int(660, 620, 890, "ones");

	for (int c = 5; c < 10; c++)
	  for (int b = 4; b < 10; b++)
	    for (int a = 2; a < 710; a++)
	    {
	      
	      D[a]=D[a-2]-B[a][b]+E[a][b][c]/A[a][b][c]*C[a][b][c];
	      
	      A[a][b][c]=A[a-1][b-4][c-5]-5;
	    }

    return 0;
}