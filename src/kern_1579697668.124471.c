#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(450, "random");
	int *D = create_one_dim_int(650, "random");
	int **C = create_two_dim_int(550, 860, "random");
	int *A = create_one_dim_int(650, "random");

	for (int b = 0; b < 856; b++)
	  for (int a = 3; a < 450; a++)
	  {
	    
	     C[a][b]=C[a+1][b+4]/D[a]-A[a]*B[a];
	    
	     B[a]=5;
	     B[a-3]=11;
	  }

    return 0;
}