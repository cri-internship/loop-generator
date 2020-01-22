#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(310, 310, "zeros");
	int ***D = create_three_dim_int(930, 110, 400, "zeros");
	int ***E = create_three_dim_int(240, 130, 830, "zeros");
	int *A = create_one_dim_int(10, "zeros");
	int ***B = create_three_dim_int(10, 680, 660, "zeros");

	for (int c = 4; c < 397; c++)
	  for (int b = 4; b < 106; b++)
	    for (int a = 4; a < 10; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-2][c-4]+41;
	      
	      B[a][b][c]=B[a-3][b-3][c]*27;
	      
	      D[a][b][c]=D[a+1][b+4][c+3]+C[a][b];
	      
	      int var_a=B[a][b][c]/46;
	      int var_b=B[a-4][b-4][c-1]/31;
	      
	      C[a][b]=C[a][b]/E[a][b][c]-10;
	      E[a][b][c]=C[a+4][b]+A[a]*D[a][b][c]-16;
	    }

    return 0;
}