#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(40, 590, "random");
	int **C = create_two_dim_int(220, 510, "random");
	int **A = create_two_dim_int(770, 210, "random");

	for (int c = 5; c < 210; c++)
	  for (int b = 5; b < 40; b++)
	    for (int a = 5; a < 40; a++)
	    {
	      
	      B[a][b]=B[a-5][b-2]-43;
	      
	      A[a][b]=A[a-5][b-3]*C[a][b];
	      
	      B[a][b]=B[a-1][b-5]*A[a][b]+C[a][b];
	      
	      A[a][b]=A[a+3][b]*16;
	      
	      int var_a=C[a][b]+41;
	      int var_b=C[a][b]/35;
	    }

    return 0;
}