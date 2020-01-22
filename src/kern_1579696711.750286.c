#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 700, "zeros");
	int *C = create_one_dim_int(320, "zeros");
	int *B = create_one_dim_int(280, "zeros");

	for (int c = 0; c < 697; c++)
	  for (int b = 0; b < 277; b++)
	    for (int a = 0; a < 277; a++)
	    {
	      
	      A[a][b]=A[a+3][b+3]-B[a];
	      
	      int var_a=A[a][b]+5;
	      int var_b=A[a][b]/9;
	      
	      int var_c=B[a]*43;
	      int var_d=B[a+3]/5;
	    }

    return 0;
}