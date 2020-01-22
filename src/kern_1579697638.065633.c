#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(130, 360, 460, "zeros");
	int ***A = create_three_dim_int(750, 420, 980, "zeros");
	int **B = create_two_dim_int(240, 750, "zeros");
	int ***D = create_three_dim_int(990, 380, 790, "zeros");
	int **C = create_two_dim_int(320, 450, "zeros");

	for (int c = 0; c < 455; c++)
	  for (int b = 5; b < 355; b++)
	    for (int a = 4; a < 126; a++)
	    {
	      
	      C[a][b]=C[a-4][b-5]-30;
	      
	      E[a][b][c]=E[a+4][b+5][c+5]+A[a][b][c]*D[a][b][c]/B[a][b];
	      
	      E[a][b][c]=E[a+2][b+1][c+2]-C[a][b]/A[a][b][c]+C[a][b]*B[a][b];
	      
	      D[a][b][c]=E[a][b][c]+E[a][b][c]/C[a][b]*B[a][b];
	      D[a+1][b+3][c+3]=C[a][b]*E[a][b][c];
	      
	      int var_a=B[a][b]/40;
	      int var_b=B[a+2][b+5]/9;
	    }

    return 0;
}