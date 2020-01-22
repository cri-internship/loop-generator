#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(430, 470, 330, "zeros");
	int *B = create_one_dim_int(520, "zeros");

	for (int c = 0; c < 326; c++)
	  for (int b = 0; b < 466; b++)
	    for (int a = 2; a < 429; a++)
	    {
	      
	      B[a]=B[a-2]-32;
	      
	      B[a]=0;
	      
	      A[a][b][c]=A[a][b][c]+B[a];
	      B[a]=A[a+1][b+4][c+4]+B[a];
	      
	      int var_a=A[a][b][c]/40;
	      int var_b=A[a+1][b+4][c]*41;
	    }

    return 0;
}