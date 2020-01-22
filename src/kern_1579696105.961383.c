#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(120, 380, "ones");
	int *A = create_one_dim_int(930, "ones");
	int *B = create_one_dim_int(720, "ones");
	int *D = create_one_dim_int(940, "ones");

	for (int b = 0; b < 376; b++)
	  for (int a = 4; a < 117; a++)
	  {
	    
	     D[a]=D[a-4]-39;
	    
	     C[a][b]=C[a+3][b+3]+2;
	    
	     A[a]=D[a]/C[a][b];
	     A[a+5]=B[a]+49/C[a][b];
	    
	     D[a]=A[a];
	    
	     C[a][b]=A[a];
	  }

    return 0;
}