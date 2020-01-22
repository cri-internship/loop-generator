#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(630, "zeros");
	int ***B = create_three_dim_int(360, 840, 310, "zeros");
	int ***C = create_three_dim_int(80, 410, 350, "zeros");

	for (int b = 4; b < 409; b++)
	  for (int a = 4; a < 80; a++)
	  {
	    
	     A[a]=A[a+2]*22;
	    
	     C[a][b][a]=C[a][b+1][a]*B[a][b][a]+A[a];
	    
	     C[a][b][a]=B[a][b][a]-C[a][b][a];
	     A[a]=B[a-3][b-4][a-3]/A[a]*C[a][b][a];
	    
	     int var_a=C[a][b][a]+28;
	     int var_b=C[a-1][b-1][a-4]-42;
	  }

    return 0;
}