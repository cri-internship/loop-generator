#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(630, "random");
	int **B = create_two_dim_int(320, 100, "random");
	int *A = create_one_dim_int(600, "random");
	int **D = create_two_dim_int(610, 640, "random");

	for (int b = 0; b < 636; b++)
	  for (int a = 4; a < 600; a++)
	  {
	    
	     C[a]=C[a-4]-A[a];
	    
	     C[a]=C[a+2]/43;
	    
	     C[a]=C[a+3]-D[a][b]*D[a][b];
	    
	     D[a][b]=4;
	     D[a+1][b+4]=38;
	    
	     B[a][b]=C[a]+37-A[a]*B[a][b];
	     D[a][b]=C[a-2]+A[a]*27;
	  }

    return 0;
}