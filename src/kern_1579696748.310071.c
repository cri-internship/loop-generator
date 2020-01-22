#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(110, 830, "ones");
	int **C = create_two_dim_int(420, 40, "ones");
	int *B = create_one_dim_int(270, "ones");

	for (int b = 2; b < 38; b++)
	  for (int a = 4; a < 105; a++)
	  {
	    
	     A[a][b]=A[a-4][b-2]*16;
	    
	     A[a][b]=A[a+5][b]-8;
	    
	     A[a][b]=A[a+5][b+3]/C[a][b]*B[a];
	    
	     C[a][b]=A[a][b]-A[a][b];
	     C[a+3][b+2]=B[a];
	    
	     B[a]=A[a][b]/C[a][b];
	     B[a-2]=C[a][b]-A[a][b];
	  }

    return 0;
}