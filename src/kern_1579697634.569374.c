#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(980, 760, "random");
	int *A = create_one_dim_int(190, "random");

	for (int b = 1; b < 757; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     B[a][b]=B[a-1][b-1]-20;
	    
	     B[a][b]=B[a-3][b]+21;
	    
	     A[a]=A[a-5]+B[a][b];
	    
	     B[a][b]=30;
	  }

    return 0;
}