#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(220, 60, 790, "zeros");
	int **A = create_two_dim_int(180, 450, "zeros");
	int ***C = create_three_dim_int(150, 460, 680, "zeros");
	int ***B = create_three_dim_int(520, 260, 180, "zeros");
	int ***E = create_three_dim_int(310, 610, 990, "zeros");

	for (int c = 1; c < 180; c++)
	  for (int b = 0; b < 260; b++)
	    for (int a = 5; a < 306; a++)
	    {
	      
	      B[a][b][c]=D[a][b][c]*C[a][b][c]+E[a][b][c]-A[a][b];
	      B[a-5][b][c-1]=C[a][b][c];
	      
	      int var_a=E[a][b][c]+14;
	      int var_b=E[a+4][b+1][c+1]-10;
	    }

    return 0;
}