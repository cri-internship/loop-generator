#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(780, 970, "ones");
	int **E = create_two_dim_int(410, 860, "ones");
	int ***D = create_three_dim_int(380, 360, 500, "ones");
	int **B = create_two_dim_int(950, 640, "ones");
	int **A = create_two_dim_int(170, 560, "ones");

	for (int c = 0; c < 499; c++)
	  for (int b = 5; b < 358; b++)
	    for (int a = 4; a < 170; a++)
	    {
	      
	      E[a][b]=E[a-4][b]-26;
	      
	      B[a][b]=B[a-1][b-4]-31;
	      
	      B[a][b]=8;
	      
	      E[a][b]=A[a][b]-B[a][b]/C[a][b]+D[a][b][c];
	      
	      D[a][b][c]=E[a][b]-E[a][b]*C[a][b];
	      D[a+2][b+2][c+1]=E[a][b];
	      
	      E[a][b]=A[a][b]*E[a][b];
	      C[a][b]=A[a][b-1]*B[a][b]+C[a][b]-E[a][b];
	    }

    return 0;
}