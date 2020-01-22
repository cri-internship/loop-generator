#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(970, 160, 790, "random");
	int **C = create_two_dim_int(990, 1000, "random");
	int **A = create_two_dim_int(180, 260, "random");

	for (int b = 4; b < 255; b++)
	  for (int a = 4; a < 178; a++)
	  {
	    
	     A[a][b]=A[a+2][b+5]/B[a][b][a];
	    
	     A[a][b]=A[a+2][b+4]-C[a][b];
	    
	     C[a][b]=A[a][b];
	     C[a-4][b]=14-B[a][b][a];
	    
	     C[a][b]=B[a][b][a]+A[a][b];
	    
	     int var_a=C[a][b]-45;
	     int var_b=C[a-4][b-1]-50;
	    
	     A[a][b]=C[a][b]*10;
	     C[a][b]=C[a-1][b-3]+A[a][b];
	  }

    return 0;
}