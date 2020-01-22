#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(820, "random");
	int **B = create_two_dim_int(650, 750, "random");
	int **A = create_two_dim_int(120, 280, "random");

	for (int b = 4; b < 280; b++)
	  for (int a = 3; a < 115; a++)
	  {
	    
	     A[a][b]=A[a][b-4]*1;
	    
	     C[a]=C[a+2]/8;
	    
	     A[a][b]=A[a+5][b]*1;
	    
	     C[a]=C[a+1]*A[a][b];
	    
	     B[a][b]=C[a];
	     B[a-3][b-1]=33;
	  }

    return 0;
}