#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(680, "random");
	int **A = create_two_dim_int(980, 360, "random");
	int **B = create_two_dim_int(910, 500, "random");

	for (int c = 5; c < 360; c++)
	  for (int b = 3; b < 677; b++)
	    for (int a = 3; a < 677; a++)
	    {
	      
	      A[a][b]=A[a-3][b-1]/32;
	      
	      B[a][b]=B[a+4][b+4]+37;
	      
	      C[a]=4;
	      C[a+3]=0;
	      
	      A[a][b]=C[a]/B[a][b];
	      
	      int var_a=B[a][b]*37;
	      int var_b=B[a+2][b+1]+31;
	      
	      int var_c=C[a]/20;
	    }

    return 0;
}