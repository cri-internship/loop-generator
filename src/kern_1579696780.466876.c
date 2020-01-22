#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(990, "random");
	int **C = create_two_dim_int(220, 250, "random");
	int *A = create_one_dim_int(120, "random");

	for (int b = 2; b < 247; b++)
	  for (int a = 4; a < 120; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]/18;
	    
	     B[a]=B[a-4]/39;
	    
	     C[a][b]=C[a+4][b+3]+A[a];
	    
	     A[a]=C[a][b];
	     A[a-3]=B[a]-21;
	    
	     int var_a=A[a]+50;
	     int var_b=A[a-4]+22;
	  }

    return 0;
}