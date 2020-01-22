#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(100, 460, 500, "zeros");
	int *C = create_one_dim_int(810, "zeros");
	int ***E = create_three_dim_int(590, 820, 450, "zeros");
	int ***D = create_three_dim_int(760, 850, 710, "zeros");
	int *B = create_one_dim_int(880, "zeros");

	for (int c = 2; c < 500; c++)
	  for (int b = 4; b < 460; b++)
	    for (int a = 1; a < 100; a++)
	    {
	      
	      A[a][b][c]=A[a-1][b-4][c-2]-32;
	      
	      D[a][b][c]=D[a][b][c]/A[a][b][c]+C[a]*E[a][b][c]-B[a];
	      E[a][b][c]=D[a+1][b+1][c]*A[a][b][c]+B[a];
	    }

    return 0;
}