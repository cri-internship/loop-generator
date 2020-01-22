#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(430, 650, "zeros");
	int *B = create_one_dim_int(410, "zeros");
	int *D = create_one_dim_int(680, "zeros");
	int ***A = create_three_dim_int(570, 120, 990, "zeros");

	for (int c = 5; c < 990; c++)
	  for (int b = 1; b < 120; b++)
	    for (int a = 5; a < 410; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-1][c-5]/D[a]-C[a][b];
	      
	      D[a]=D[a-5]+21;
	      
	      C[a][b]=C[a-2][b-1]+B[a];
	      
	      int var_a=B[a]-22;
	      B[a]=17;
	    }

    return 0;
}