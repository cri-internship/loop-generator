#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(370, 190, "zeros");
	int *A = create_one_dim_int(190, "zeros");
	int *B = create_one_dim_int(880, "zeros");

	for (int b = 2; b < 190; b++)
	  for (int a = 4; a < 370; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]+A[a]*B[a];
	    
	     C[a][b]=B[a]-C[a][b]/C[a][b];
	     A[a]=B[a-4]*C[a][b]+A[a];
	  }

    return 0;
}