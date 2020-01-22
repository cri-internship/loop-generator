#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(890, 840, "zeros");
	int **D = create_two_dim_int(990, 440, "zeros");
	int *C = create_one_dim_int(430, "zeros");
	int ***A = create_three_dim_int(910, 850, 320, "zeros");

	for (int c = 0; c < 319; c++)
	  for (int b = 1; b < 436; b++)
	    for (int a = 4; a < 430; a++)
	    {
	      
	      C[a]=C[a-4]-49;
	      
	      D[a][b]=D[a+1][b+4]+46;
	      
	      C[a]=D[a][b]+B[a][b]-C[a]/A[a][b][c];
	      D[a][b]=D[a-3][b-1]/A[a][b][c]-C[a]+B[a][b];
	      
	      int var_a=A[a][b][c]*20;
	      int var_b=A[a+2][b+4][c+1]-26;
	    }

    return 0;
}