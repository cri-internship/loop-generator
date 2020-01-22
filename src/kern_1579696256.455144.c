#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(640, "random");
	int **B = create_two_dim_int(520, 310, "random");

	for (int b = 0; b < 635; b++)
	  for (int a = 0; a < 635; a++)
	  {
	    
	     A[a]=A[a+5]*B[a][b];
	    
	     B[a][b]=A[a]+B[a][b];
	     A[a]=A[a+4]*B[a][b];
	  }

    return 0;
}