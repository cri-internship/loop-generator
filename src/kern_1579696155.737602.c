#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(830, 140, 330, "ones");
	int **B = create_two_dim_int(670, 570, "ones");
	int ***A = create_three_dim_int(60, 480, 960, "ones");
	int **D = create_two_dim_int(590, 700, "ones");

	for (int c = 0; c < 960; c++)
	  for (int b = 1; b < 480; b++)
	    for (int a = 1; a < 60; a++)
	    {
	      
	      A[a][b][c]=A[a][b-1][c]*18;
	      
	      B[a][b]=B[a-1][b-1]*D[a][b]+A[a][b][c];
	      
	      C[a][b][c]=D[a][b]*B[a][b]/C[a][b][c];
	      D[a][b]=B[a][b]-C[a][b][c];
	    }

    return 0;
}