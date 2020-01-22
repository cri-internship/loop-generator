#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(450, "zeros");
	int *A = create_one_dim_int(320, "zeros");
	int *E = create_one_dim_int(150, "zeros");
	int **D = create_two_dim_int(220, 290, "zeros");
	int *B = create_one_dim_int(390, "zeros");

	for (int c = 5; c < 290; c++)
	  for (int b = 5; b < 148; b++)
	    for (int a = 5; a < 148; a++)
	    {
	      
	      A[a]=A[a-1]-E[a]+B[a]/C[a];
	      
	      D[a][b]=D[a-4][b-5]+17;
	      
	      B[a]=B[a+5]*A[a]+33;
	      
	      B[a]=B[a+2]/D[a][b]-A[a];
	      
	      E[a]=E[a+2]/A[a]+B[a]-D[a][b]*C[a];
	      
	      D[a][b]=A[a];
	    }

    return 0;
}