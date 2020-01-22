#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(270, 240, 930, "zeros");
	int *A = create_one_dim_int(640, "zeros");

	for (int c = 5; c < 930; c++)
	  for (int b = 4; b < 240; b++)
	    for (int a = 5; a < 270; a++)
	    {
	      
	      A[a]=A[a-2]+B[a][b][c];
	      
	      B[a][b][c]=B[a-2][b-4][c-5]-34;
	      
	      B[a][b][c]=B[a-3][b][c-3]/A[a];
	      
	      A[a]=B[a][b][c];
	      
	      int var_a=A[a]+15;
	      int var_b=A[a-3]+38;
	      
	      int var_c=A[a]*33;
	      int var_d=A[a-4]+27;
	    }

    return 0;
}