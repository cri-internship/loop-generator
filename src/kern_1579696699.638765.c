#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(360, 280, 430, "zeros");
	int **C = create_two_dim_int(870, 180, "zeros");
	int ***A = create_three_dim_int(860, 250, 360, "zeros");
	int *B = create_one_dim_int(90, "zeros");

	for (int c = 2; c < 430; c++)
	  for (int b = 3; b < 177; b++)
	    for (int a = 3; a < 90; a++)
	    {
	      
	      D[a][b][c]=D[a][b][c-2]+34;
	      
	      C[a][b]=18;
	      C[a+2][b+3]=39;
	      
	      D[a][b][c]=20;
	      
	      D[a][b][c]=B[a]-D[a][b][c]*A[a][b][c];
	      A[a][b][c]=B[a]-D[a][b][c]*C[a][b];
	    }

    return 0;
}