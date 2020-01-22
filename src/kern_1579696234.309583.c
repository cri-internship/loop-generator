#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(250, 370, "random");
	int **D = create_two_dim_int(240, 620, "random");
	int *A = create_one_dim_int(360, "random");
	int **B = create_two_dim_int(920, 960, "random");

	for (int b = 2; b < 360; b++)
	  for (int a = 2; a < 360; a++)
	  {
	    
	     A[a]=D[a][b]/1;
	     A[a-2]=B[a][b];
	  }

    return 0;
}