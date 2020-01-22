#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(480, "zeros");
	int *B = create_one_dim_int(1000, "zeros");
	int *D = create_one_dim_int(890, "zeros");
	int **C = create_two_dim_int(730, 850, "zeros");
	int ***E = create_three_dim_int(970, 270, 950, "zeros");

	for (int c = 3; c < 850; c++)
	  for (int b = 4; b < 480; b++)
	    for (int a = 4; a < 480; a++)
	    {
	      
	      C[a][b]=C[a-1][b-3]+19;
	      
	      A[a]=A[a-4]*46;
	      
	      int var_a=B[a]+36;
	      int var_b=B[a-2]+6;
	    }

    return 0;
}