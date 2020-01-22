#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(270, 850, "ones");
	int ***C = create_three_dim_int(420, 910, 340, "ones");
	int **A = create_two_dim_int(990, 270, "ones");
	int ***B = create_three_dim_int(50, 410, 590, "ones");

	for (int c = 0; c < 336; c++)
	  for (int b = 2; b < 268; b++)
	    for (int a = 2; a < 270; a++)
	    {
	      
	      C[a][b][c]=C[a+1][b+4][c+4]*47;
	      
	      A[a][b]=A[a+4][b+2]-B[a][b][c]*C[a][b][c];
	      
	      D[a][b]=10;
	      D[a-2][b-2]=41;
	      
	      int var_a=A[a][b]+24;
	      int var_b=A[a+2][b+2]*4;
	    }

    return 0;
}