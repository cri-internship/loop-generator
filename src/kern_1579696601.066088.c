#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(990, 700, 750, "random");
	int **D = create_two_dim_int(410, 920, "random");
	int ***C = create_three_dim_int(770, 40, 910, "random");
	int *A = create_one_dim_int(440, "random");

	for (int b = 1; b < 38; b++)
	  for (int a = 4; a < 409; a++)
	  {
	    
	     C[a][b][a]=C[a+2][b+2][a+4]*D[a][b]/A[a]-B[a][b][a];
	    
	     A[a]=A[a+2]-28;
	    
	     B[a][b][a]=B[a+1][b+2][a+1]-14;
	    
	     D[a][b]=D[a+1][b+5]-50;
	    
	     B[a][b][a]=C[a][b][a]+D[a][b]*C[a][b][a];
	    
	     int var_a=D[a][b]-8;
	     int var_b=D[a-4][b-1]-34;
	  }

    return 0;
}