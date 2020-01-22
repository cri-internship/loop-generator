#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(780, 530, "zeros");
	int **A = create_two_dim_int(830, 210, "zeros");
	int **B = create_two_dim_int(670, 330, "zeros");
	int *D = create_one_dim_int(140, "zeros");

	for (int c = 0; c < 209; c++)
	  for (int b = 0; b < 667; b++)
	    for (int a = 0; a < 667; a++)
	    {
	      
	      A[a][b]=A[a][b+1]/B[a][b]+31;
	      
	      B[a][b]=C[a][b];
	      B[a+3][b]=43;
	      
	      int var_a=B[a][b]/16;
	      int var_b=B[a+2][b+2]-22;
	    }

    return 0;
}