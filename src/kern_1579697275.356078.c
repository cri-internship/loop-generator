#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(50, 380, "random");
	int *B = create_one_dim_int(700, "random");
	int *A = create_one_dim_int(180, "random");

	for (int b = 5; b < 175; b++)
	  for (int a = 5; a < 175; a++)
	  {
	    
	     A[a]=A[a-5]/B[a];
	    
	     B[a]=B[a+5]+29;
	    
	     A[a]=A[a+5]+37;
	    
	     B[a]=27;
	    
	     B[a]=B[a]+A[a]/C[a][b];
	     A[a]=B[a-2]-A[a]/C[a][b];
	  }

    return 0;
}