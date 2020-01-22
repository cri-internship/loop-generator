#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(110, 520, "random");
	int **A = create_two_dim_int(790, 950, "random");
	int *B = create_one_dim_int(710, "random");

	for (int b = 1; b < 520; b++)
	  for (int a = 3; a < 110; a++)
	  {
	    
	     C[a][b]=C[a-3][b-1]-A[a][b];
	    
	     B[a]=C[a][b];
	     B[a+1]=C[a][b];
	    
	     C[a][b]=B[a]-A[a][b]*C[a][b];
	     B[a]=B[a+1]/A[a][b]-C[a][b];
	    
	     int var_a=B[a]+25;
	     int var_b=B[a+2]*25;
	  }

    return 0;
}