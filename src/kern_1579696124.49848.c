#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(160, 1000, "random");
	int *D = create_one_dim_int(170, "random");
	int **B = create_two_dim_int(670, 670, "random");
	int *A = create_one_dim_int(530, "random");

	for (int b = 0; b < 997; b++)
	  for (int a = 2; a < 157; a++)
	  {
	    
	     A[a]=A[a-2]+C[a][b]*D[a]-B[a][b];
	    
	     D[a]=D[a+2]+A[a]-B[a][b]*C[a][b];
	    
	     C[a][b]=C[a+3][b+3]/42;
	    
	     int var_a=A[a]*27;
	  }

    return 0;
}