#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(620, "ones");
	int ***E = create_three_dim_int(750, 430, 920, "ones");
	int **A = create_two_dim_int(840, 320, "ones");
	int ***D = create_three_dim_int(430, 280, 120, "ones");
	int **C = create_two_dim_int(980, 170, "ones");

	for (int c = 3; c < 167; c++)
	  for (int b = 4; b < 620; b++)
	    for (int a = 4; a < 620; a++)
	    {
	      
	      A[a][b]=A[a-1][b-3]/12;
	      
	      A[a][b]=A[a+4][b+2]-B[a]+E[a][b][c]/D[a][b][c];
	      
	      C[a][b]=B[a]-C[a][b]+A[a][b]/C[a][b]*D[a][b][c];
	      B[a]=E[a][b][c]+A[a][b];
	      
	      int var_a=C[a][b]/36;
	      int var_b=C[a][b+3]/42;
	      
	      E[a][b][c]=B[a]-C[a][b]/D[a][b][c];
	      A[a][b]=B[a-4]-A[a][b]/D[a][b][c]*C[a][b];
	    }

    return 0;
}