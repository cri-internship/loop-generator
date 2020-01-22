#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(160, "random");
	int **D = create_two_dim_int(150, 330, "random");
	int *A = create_one_dim_int(200, "random");
	int *B = create_one_dim_int(290, "random");

	for (int b = 0; b < 326; b++)
	  for (int a = 5; a < 145; a++)
	  {
	    
	     A[a]=A[a-5]*15/B[a];
	    
	     A[a]=A[a+3]*C[a]+D[a][b]/C[a];
	    
	     A[a]=D[a][b]-A[a]/19;
	     C[a]=D[a+5][b+4]*B[a]-C[a]/A[a];
	  }

    return 0;
}