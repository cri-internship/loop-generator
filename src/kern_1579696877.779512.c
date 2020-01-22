#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(320, 750, "random");
	int *B = create_one_dim_int(400, "random");
	int *C = create_one_dim_int(820, "random");
	int *A = create_one_dim_int(960, "random");

	for (int c = 5; c < 820; c++)
	  for (int b = 5; b < 820; b++)
	    for (int a = 5; a < 820; a++)
	    {
	      
	      C[a]=D[a][b];
	      C[a]=34;
	      
	      int var_a=A[a]/39;
	      int var_b=A[a-5]-44;
	    }

    return 0;
}