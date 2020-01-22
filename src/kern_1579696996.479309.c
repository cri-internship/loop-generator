#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(550, 750, 840, "ones");

	for (int c = 4; c < 837; c++)
	  for (int b = 5; b < 747; b++)
	    for (int a = 4; a < 546; a++)
	    {
	      
	      A[a][b][c]=29;
	      A[a-3][b-5][c-4]=33;
	      
	      int var_a=A[a][b][c]*42;
	      int var_b=A[a+4][b+3][c+3]/47;
	      
	      int var_c=A[a][b][c]/30;
	      int var_d=A[a+2][b+3][c+3]-48;
	      
	      int var_e=A[a][b][c]/15;
	      int var_f=A[a-4][b-4][c]*4;
	    }

    return 0;
}