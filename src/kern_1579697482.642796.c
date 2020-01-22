#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(430, 790, 520, "zeros");
	int **C = create_two_dim_int(310, 360, "zeros");
	int *A = create_one_dim_int(570, "zeros");
	int *E = create_one_dim_int(920, "zeros");
	int ***B = create_three_dim_int(930, 650, 150, "zeros");

	for (int c = 2; c < 148; c++)
	  for (int b = 0; b < 648; b++)
	    for (int a = 2; a < 926; a++)
	    {
	      
	      B[a][b][c]=B[a-2][b][c-2]+9;
	      
	      E[a]=B[a][b][c]*C[a][b]/E[a]+D[a][b][c];
	      D[a][b][c]=B[a+4][b+2][c+2]/A[a]+E[a]*D[a][b][c];
	    }

    return 0;
}