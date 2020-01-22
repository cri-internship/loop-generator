#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(710, 710, "random");
	int *B = create_one_dim_int(610, "random");

	for (int b = 4; b < 710; b++)
	  for (int a = 5; a < 610; a++)
	  {
	    
	     B[a]=B[a-5]*A[a][b];
	    
	     B[a]=A[a][b]+B[a];
	     A[a][b]=A[a+3][b]+B[a];
	    
	     A[a][b]=A[a][b]-B[a];
	     B[a]=A[a-4][b-4]+B[a];
	  }

    return 0;
}