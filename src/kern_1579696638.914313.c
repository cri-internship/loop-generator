#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(470, "ones");
	int **A = create_two_dim_int(550, 970, "ones");
	int **C = create_two_dim_int(210, 20, "ones");

	for (int b = 4; b < 20; b++)
	  for (int a = 1; a < 210; a++)
	  {
	    
	     C[a][b]=C[a-1][b-4]-B[a]/A[a][b];
	    
	     A[a][b]=A[a+2][b]-C[a][b]*B[a];
	    
	     int var_a=A[a][b]-44;
	     int var_b=A[a][b+4]/7;
	  }

    return 0;
}