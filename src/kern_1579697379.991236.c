#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(680, "ones");
	int *C = create_one_dim_int(450, "ones");
	int ***B = create_three_dim_int(900, 220, 230, "ones");

	for (int c = 3; c < 226; c++)
	  for (int b = 2; b < 217; b++)
	    for (int a = 3; a < 448; a++)
	    {
	      
	      C[a]=C[a-3]/A[a];
	      
	      B[a][b][c]=B[a+4][b+3][c+4]*50;
	      
	      A[a]=A[a+2]-42;
	      
	      B[a][b][c]=43;
	      
	      int var_a=C[a]+29;
	      int var_b=C[a+2]-11;
	      
	      A[a]=C[a]-B[a][b][c]+48;
	      
	      int var_c=A[a]*14;
	      int var_d=A[a-3]/46;
	    }

    return 0;
}