#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(720, "random");
	int **C = create_two_dim_int(440, 990, "random");
	int *D = create_one_dim_int(870, "random");
	int **A = create_two_dim_int(680, 950, "random");

	for (int c = 5; c < 950; c++)
	  for (int b = 2; b < 440; b++)
	    for (int a = 2; a < 440; a++)
	    {
	      
	      C[a][b]=C[a-2][b-5]*17;
	      
	      D[a]=D[a+5]/C[a][b];
	      
	      C[a][b]=32;
	      
	      D[a]=1;
	      
	      int var_a=A[a][b]/42;
	      int var_b=A[a-1][b-2]-9;
	    }

    return 0;
}