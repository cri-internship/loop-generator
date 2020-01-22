#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(710, 490, 390, "random");
	int ***C = create_three_dim_int(500, 270, 770, "random");
	int *A = create_one_dim_int(800, "random");

	for (int c = 4; c < 770; c++)
	  for (int b = 5; b < 270; b++)
	    for (int a = 4; a < 500; a++)
	    {
	      
	      A[a]=A[a-4]+42;
	      
	      C[a][b][c]=C[a][b-5][c-3]*46;
	      
	      int var_a=C[a][b][c]/33;
	      int var_b=C[a-1][b-5][c-4]/12;
	    }

    return 0;
}