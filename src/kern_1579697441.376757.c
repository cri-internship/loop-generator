#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(280, 520, "zeros");
	int ***B = create_three_dim_int(150, 440, 880, "zeros");
	int **C = create_two_dim_int(250, 540, "zeros");
	int **D = create_two_dim_int(520, 80, "zeros");

	for (int c = 3; c < 540; c++)
	  for (int b = 4; b < 250; b++)
	    for (int a = 4; a < 250; a++)
	    {
	      
	      C[a][b]=D[a][b]/B[a][b][c]-A[a][b];
	      C[a-4][b-3]=B[a][b][c]*A[a][b];
	      
	      int var_a=C[a][b]*40;
	      int var_b=C[a-3][b]*21;
	    }

    return 0;
}