#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(110, "zeros");
	int ***A = create_three_dim_int(990, 450, 350, "zeros");

	for (int c = 0; c < 346; c++)
	  for (int b = 0; b < 449; b++)
	    for (int a = 0; a < 110; a++)
	    {
	      
	      A[a][b][c]=10;
	      A[a+2][b+1][c+4]=30;
	      
	      int var_a=B[a]*28;
	      int var_b=B[a]+17;
	    }

    return 0;
}