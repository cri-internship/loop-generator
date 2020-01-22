#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(420, 600, 320, "random");
	int ***C = create_three_dim_int(390, 80, 610, "random");
	int *B = create_one_dim_int(360, "random");

	for (int b = 0; b < 75; b++)
	  for (int a = 0; a < 359; a++)
	  {
	    
	     C[a][b][a]=C[a][b+3][a+4]/A[a][b][a]*B[a];
	    
	     B[a]=B[a+1]/42;
	    
	     C[a][b][a]=33;
	  }

    return 0;
}