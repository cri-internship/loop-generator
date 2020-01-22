#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(670, 380, 970, "zeros");
	int *D = create_one_dim_int(400, "zeros");
	int *A = create_one_dim_int(970, "zeros");
	int **C = create_two_dim_int(430, 610, "zeros");

	for (int c = 0; c < 606; c++)
	  for (int b = 2; b < 395; b++)
	    for (int a = 2; a < 395; a++)
	    {
	      
	      D[a]=D[a+4]/B[a][b][c];
	      
	      D[a]=D[a+5]/7+A[a];
	      
	      C[a][b]=C[a+5][b+4]+9;
	      
	      int var_a=A[a]*17;
	      int var_b=A[a-2]*20;
	    }

    return 0;
}