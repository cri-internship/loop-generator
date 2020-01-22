#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(220, 750, 340, "random");
	int ***B = create_three_dim_int(560, 60, 950, "random");
	int ***D = create_three_dim_int(650, 730, 660, "random");
	int **C = create_two_dim_int(280, 480, "random");

	for (int c = 5; c < 339; c++)
	  for (int b = 2; b < 480; b++)
	    for (int a = 5; a < 220; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-2][c-5]*32;
	      
	      A[a][b][c]=B[a][b][c]+D[a][b][c]/C[a][b];
	      
	      int var_a=C[a][b]+19;
	    }

    return 0;
}