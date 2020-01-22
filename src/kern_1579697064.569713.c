#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(900, 100, "random");
	int **A = create_two_dim_int(90, 110, "random");

	for (int c = 5; c < 95; c++)
	  for (int b = 4; b < 90; b++)
	    for (int a = 4; a < 90; a++)
	    {
	      
	      B[a][b]=B[a-4][b-2]*10;
	      
	      B[a][b]=B[a+3][b+3]*19;
	      
	      int var_a=B[a][b]/15;
	      int var_b=B[a+4][b+1]*36;
	      
	      B[a][b]=A[a][b]-B[a][b];
	      A[a][b]=A[a-4][b-5]+17;
	      
	      A[a][b]=A[a][b]-B[a][b];
	      B[a][b]=A[a-3][b-1]+B[a][b];
	    }

    return 0;
}