#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(90, 250, "ones");
	int ***B = create_three_dim_int(800, 1000, 740, "ones");
	int *C = create_one_dim_int(970, "ones");

	for (int b = 4; b < 245; b++)
	  for (int a = 0; a < 85; a++)
	  {
	    
	     A[a][b]=A[a][b-4]+48;
	    
	     C[a]=A[a][b]-B[a][b][a];
	     A[a][b]=C[a]/B[a][b][a]+A[a][b];
	    
	     A[a][b]=A[a+5][b+5]-14;
	    
	     A[a][b]=A[a][b+1]*C[a];
	    
	     int var_a=A[a][b]/33;
	     int var_b=A[a+2][b+3]-37;
	  }

    return 0;
}