#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(710, 350, "zeros");
	int **C = create_two_dim_int(340, 90, "zeros");
	int **B = create_two_dim_int(840, 80, "zeros");

	for (int b = 4; b < 76; b++)
	  for (int a = 2; a < 337; a++)
	  {
	    
	     C[a][b]=C[a-2][b]/A[a][b];
	    
	     C[a][b]=C[a+3][b+2]/B[a][b]+A[a][b];
	    
	     B[a][b]=C[a][b]/A[a][b];
	     B[a+5][b+4]=A[a][b]/C[a][b];
	    
	     int var_a=C[a][b]*45;
	     int var_b=C[a][b-4]-22;
	  }

    return 0;
}