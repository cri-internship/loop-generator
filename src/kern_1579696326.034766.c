#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(250, 920, 390, "zeros");
	int ***E = create_three_dim_int(790, 360, 790, "zeros");
	int ***D = create_three_dim_int(930, 480, 730, "zeros");
	int ***C = create_three_dim_int(930, 280, 990, "zeros");
	int **B = create_two_dim_int(450, 850, "zeros");

	for (int c = 0; c < 849; c++)
	  for (int b = 0; b < 447; b++)
	    for (int a = 0; a < 447; a++)
	    {
	      
	      B[a][b]=D[a][b][c];
	      B[a+3][b+1]=C[a][b][c]-E[a][b][c]*A[a][b][c]+A[a][b][c];
	    }

    return 0;
}