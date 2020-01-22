#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(470, 570, "zeros");
	int *A = create_one_dim_int(890, "zeros");

	for (int c = 5; c < 570; c++)
	  for (int b = 2; b < 466; b++)
	    for (int a = 2; a < 466; a++)
	    {
	      
	      B[a][b]=10;
	      B[a+4][b]=22;
	      
	      int var_a=A[a]+3;
	      int var_b=A[a-2]-17;
	      
	      int var_c=B[a][b]-17;
	      int var_d=B[a-2][b-5]-15;
	    }

    return 0;
}