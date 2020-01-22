#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(940, 770, "random");
	int *B = create_one_dim_int(400, "random");
	int **C = create_two_dim_int(900, 40, "random");

	for (int c = 2; c < 765; c++)
	  for (int b = 2; b < 397; b++)
	    for (int a = 2; a < 397; a++)
	    {
	      
	      A[a][b]=A[a-2][b]/26;
	      
	      A[a][b]=A[a+5][b+5]-42;
	      
	      int var_a=B[a]-23;
	      int var_b=B[a+3]+37;
	      
	      int var_c=B[a]*45;
	    }

    return 0;
}