#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(520, "zeros");
	int **B = create_two_dim_int(590, 670, "zeros");

	for (int c = 0; c < 665; c++)
	  for (int b = 3; b < 519; b++)
	    for (int a = 3; a < 519; a++)
	    {
	      
	      A[a]=A[a+1]/24;
	      
	      B[a][b]=B[a+4][b+5]/A[a];
	      
	      B[a][b]=29;
	      
	      A[a]=28;
	      
	      int var_a=A[a]/36;
	      int var_b=A[a-3]/27;
	    }

    return 0;
}