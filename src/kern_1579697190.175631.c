#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(10, "random");
	int **B = create_two_dim_int(920, 920, "random");

	for (int c = 4; c < 919; c++)
	  for (int b = 5; b < 10; b++)
	    for (int a = 5; a < 10; a++)
	    {
	      
	      B[a][b]=B[a-5][b-4]+15;
	      
	      A[a]=43;
	      A[a-2]=18;
	      
	      A[a]=B[a][b];
	      
	      int var_a=B[a][b]-37;
	      int var_b=B[a][b+1]+24;
	      
	      B[a][b]=B[a][b]-A[a];
	      A[a]=B[a+3][b+1]+A[a];
	    }

    return 0;
}