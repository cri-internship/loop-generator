#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(530, 260, 920, "ones");
	int ***A = create_three_dim_int(910, 370, 770, "ones");
	int *B = create_one_dim_int(290, "ones");
	int ***C = create_three_dim_int(520, 980, 190, "ones");

	for (int c = 3; c < 190; c++)
	  for (int b = 1; b < 370; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      C[a][b][c]=39;
	      C[a-4][b-1][c-3]=4;
	      
	      C[a][b][c]=A[a][b][c]*C[a][b][c]-B[a]+D[a][b][c];
	      B[a]=A[a-4][b][c-3]/B[a]+D[a][b][c];
	    }

    return 0;
}