#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(190, "ones");
	int ***A = create_three_dim_int(600, 740, 460, "ones");
	int **B = create_two_dim_int(820, 150, "ones");
	int *E = create_one_dim_int(1000, "ones");
	int ***D = create_three_dim_int(570, 860, 590, "ones");

	for (int c = 5; c < 460; c++)
	  for (int b = 2; b < 740; b++)
	    for (int a = 4; a < 190; a++)
	    {
	      
	      A[a][b][c]=A[a-4][b-1][c-3]+D[a][b][c]-B[a][b]/C[a]*E[a];
	      
	      A[a][b][c]=A[a][b-1][c-5]-35;
	      
	      D[a][b][c]=D[a][b+4][c+4]/A[a][b][c]*E[a];
	      
	      int var_a=C[a]*41;
	      C[a]=47;
	      
	      int var_b=E[a]-46;
	    }

    return 0;
}