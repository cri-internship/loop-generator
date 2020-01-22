#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(820, "zeros");
	int **B = create_two_dim_int(760, 890, "zeros");
	int **C = create_two_dim_int(520, 440, "zeros");

	for (int c = 4; c < 440; c++)
	  for (int b = 4; b < 520; b++)
	    for (int a = 4; a < 520; a++)
	    {
	      
	      C[a][b]=C[a-1][b-4]-39;
	      
	      C[a][b]=C[a-4][b-2]+4;
	      
	      B[a][b]=C[a][b]-A[a];
	      B[a+5][b+1]=A[a];
	      
	      int var_a=B[a][b]/37;
	      int var_b=B[a-1][b-4]*27;
	    }

    return 0;
}