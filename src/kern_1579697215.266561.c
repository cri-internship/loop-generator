#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(220, "random");
	int *B = create_one_dim_int(10, "random");
	int *C = create_one_dim_int(320, "random");
	int **D = create_two_dim_int(400, 100, "random");

	for (int c = 4; c < 9; c++)
	  for (int b = 4; b < 9; b++)
	    for (int a = 4; a < 9; a++)
	    {
	      
	      B[a]=B[a-4]+48;
	      
	      B[a]=B[a+1]+15;
	      
	      C[a]=B[a]+D[a][b];
	      C[a+5]=A[a]+A[a];
	    }

    return 0;
}