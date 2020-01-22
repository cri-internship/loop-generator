#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(990, 250, 400, "ones");
	int **A = create_two_dim_int(940, 150, "ones");
	int ***C = create_three_dim_int(740, 880, 540, "ones");
	int *B = create_one_dim_int(100, "ones");

	for (int c = 1; c < 400; c++)
	  for (int b = 1; b < 148; b++)
	    for (int a = 2; a < 96; a++)
	    {
	      
	      D[a][b][c]=49;
	      D[a-2][b-1][c-1]=A[a][b];
	      
	      C[a][b][c]=A[a][b]-B[a]/37;
	      D[a][b][c]=A[a+4][b+2]+0;
	      
	      A[a][b]=C[a][b][c]*A[a][b]+D[a][b][c];
	      B[a]=C[a+3][b+1][c+2]+23;
	      
	      C[a][b][c]=B[a]-D[a][b][c]*4;
	      C[a][b][c]=B[a+3]*D[a][b][c]+C[a][b][c]/A[a][b];
	      
	      int var_a=B[a]*12;
	      int var_b=B[a+4]-9;
	    }

    return 0;
}