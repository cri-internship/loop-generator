#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(140, 120, "zeros");
	int ***C = create_three_dim_int(950, 790, 870, "zeros");
	int ***A = create_three_dim_int(1000, 220, 350, "zeros");
	int ***D = create_three_dim_int(550, 150, 800, "zeros");

	for (int c = 0; c < 795; c++)
	  for (int b = 4; b < 120; b++)
	    for (int a = 1; a < 140; a++)
	    {
	      
	      B[a][b]=B[a-1][b-4]/D[a][b][c]+A[a][b][c]*C[a][b][c];
	      
	      D[a][b][c]=D[a+5][b+3][c]/1;
	      
	      int var_a=D[a][b][c]+32;
	      int var_b=D[a][b+2][c+5]/26;
	    }

    return 0;
}