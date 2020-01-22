#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(550, "zeros");
	int **B = create_two_dim_int(200, 770, "zeros");
	int *A = create_one_dim_int(740, "zeros");
	int **C = create_two_dim_int(580, 990, "zeros");

	for (int c = 4; c < 766; c++)
	  for (int b = 5; b < 196; b++)
	    for (int a = 5; a < 196; a++)
	    {
	      
	      B[a][b]=B[a-2][b-4]-16;
	      
	      C[a][b]=C[a][b+3]+26;
	      
	      B[a][b]=B[a+4][b+4]/15;
	      
	      D[a]=B[a][b]/A[a];
	      B[a][b]=B[a-4][b-4]-D[a]*C[a][b];
	      
	      C[a][b]=B[a][b]+36;
	      A[a]=B[a-5][b-3]+A[a]-D[a];
	    }

    return 0;
}