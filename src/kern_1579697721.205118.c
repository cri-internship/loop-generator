#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(680, 810, "zeros");
	int **B = create_two_dim_int(130, 400, "zeros");
	int **C = create_two_dim_int(770, 180, "zeros");

	for (int b = 3; b < 395; b++)
	  for (int a = 4; a < 128; a++)
	  {
	    
	     B[a][b]=B[a-1][b-2]+A[a][b]*C[a][b];
	    
	     B[a][b]=B[a-4][b-3]*A[a][b]-C[a][b];
	    
	     B[a][b]=B[a+2][b+2]/C[a][b];
	    
	     B[a][b]=B[a+1][b+4]*C[a][b];
	    
	     int var_a=B[a][b]+39;
	     int var_b=B[a-2][b]*14;
	  }

    return 0;
}