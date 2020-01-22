#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(630, 890, "ones");
	int ***C = create_three_dim_int(940, 530, 760, "ones");
	int *A = create_one_dim_int(60, "ones");

	for (int c = 5; c < 756; c++)
	  for (int b = 5; b < 527; b++)
	    for (int a = 5; a < 935; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+3][c+4]+A[a];
	      
	      C[a][b][c]=39;
	      
	      int var_a=C[a][b][c]-23;
	      int var_b=C[a-1][b-5][c-5]+40;
	    }

    return 0;
}