#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(30, "ones");
	int **B = create_two_dim_int(860, 90, "ones");
	int ***C = create_three_dim_int(980, 40, 140, "ones");
	int ***D = create_three_dim_int(610, 120, 210, "ones");

	for (int c = 2; c < 140; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 5; a < 30; a++)
	    {
	      
	      D[a][b][c]=D[a-2][b-5][c-2]/A[a]*B[a][b];
	      
	      C[a][b][c]=38;
	      C[a-5][b][c]=49;
	      
	      D[a][b][c]=5;
	      
	      A[a]=A[a]+D[a][b][c]*28;
	      C[a][b][c]=A[a-3]*C[a][b][c]-D[a][b][c]+B[a][b];
	      
	      int var_a=D[a][b][c]-45;
	      int var_b=D[a+3][b+1][c+2]/46;
	    }

    return 0;
}