#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(390, "zeros");
	int **B = create_two_dim_int(680, 100, "zeros");

	for (int c = 1; c < 95; c++)
	  for (int b = 5; b < 677; b++)
	    for (int a = 5; a < 677; a++)
	    {
	      
	      B[a][b]=B[a-5][b]-A[a];
	      
	      B[a][b]=B[a+1][b+2]-24;
	      
	      B[a][b]=B[a+3][b+2]-31;
	      
	      B[a][b]=B[a+2][b]+A[a];
	      
	      int var_a=B[a][b]+8;
	      int var_b=B[a+1][b+5]-9;
	    }

    return 0;
}