#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(120, 70, "zeros");
	int ***A = create_three_dim_int(270, 620, 940, "zeros");
	int ***E = create_three_dim_int(590, 780, 600, "zeros");
	int ***D = create_three_dim_int(400, 590, 90, "zeros");
	int **C = create_two_dim_int(160, 480, "zeros");

	for (int c = 2; c < 940; c++)
	  for (int b = 5; b < 480; b++)
	    for (int a = 5; a < 160; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-1][c-2]-23;
	      
	      A[a][b][c]=12;
	      
	      int var_a=C[a][b]+50;
	      int var_b=C[a-5][b-2]+15;
	    }

    return 0;
}