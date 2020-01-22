#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(970, 180, "random");
	int *C = create_one_dim_int(700, "random");
	int **B = create_two_dim_int(280, 450, "random");

	for (int c = 1; c < 180; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 5; a < 280; a++)
	    {
	      
	      C[a]=C[a-4]*A[a][b]+5;
	      
	      B[a][b]=B[a-5][b-1]+20;
	      
	      C[a]=C[a+1]/20;
	      
	      A[a][b]=29;
	      A[a+1][b]=1;
	    }

    return 0;
}