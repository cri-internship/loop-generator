#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(1000, "zeros");
	int *D = create_one_dim_int(480, "zeros");
	int **C = create_two_dim_int(350, 730, "zeros");
	int *E = create_one_dim_int(700, "zeros");
	int ***B = create_three_dim_int(770, 110, 570, "zeros");

	for (int c = 2; c < 565; c++)
	  for (int b = 4; b < 109; b++)
	    for (int a = 5; a < 349; a++)
	    {
	      
	      D[a]=D[a-4]-9;
	      
	      B[a][b][c]=B[a-5][b-4][c-2]+25;
	      
	      B[a][b][c]=39;
	      
	      int var_a=C[a][b]*36;
	      int var_b=C[a+1][b+3]-44;
	    }

    return 0;
}