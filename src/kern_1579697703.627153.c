#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(750, 710, "zeros");
	int ***D = create_three_dim_int(130, 600, 660, "zeros");
	int **C = create_two_dim_int(110, 320, "zeros");
	int **A = create_two_dim_int(270, 420, "zeros");

	for (int c = 4; c < 319; c++)
	  for (int b = 2; b < 110; b++)
	    for (int a = 2; a < 110; a++)
	    {
	      
	      B[a][b]=35;
	      B[a+1][b+4]=18;
	      
	      C[a][b]=D[a][b][c]*A[a][b];
	      C[a][b+1]=B[a][b];
	      
	      D[a][b][c]=C[a][b]-36/B[a][b];
	      A[a][b]=C[a-2][b-4]*B[a][b];
	    }

    return 0;
}