#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(340, 320, "zeros");
	int *A = create_one_dim_int(490, "zeros");
	int ***D = create_three_dim_int(650, 280, 520, "zeros");
	int ***B = create_three_dim_int(470, 590, 360, "zeros");
	int *E = create_one_dim_int(40, "zeros");

	for (int c = 0; c < 520; c++)
	  for (int b = 4; b < 278; b++)
	    for (int a = 3; a < 340; a++)
	    {
	      
	      C[a][b]=C[a-3][b-4]-30;
	      
	      A[a]=A[a+5]+3;
	      
	      B[a][b][c]=D[a][b][c]/C[a][b]-B[a][b][c]*48;
	      A[a]=D[a+1][b+2][c]+E[a]*C[a][b]-E[a];
	    }

    return 0;
}