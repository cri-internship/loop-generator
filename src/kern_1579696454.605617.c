#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(600, 240, "ones");
	int **B = create_two_dim_int(530, 260, "ones");
	int **C = create_two_dim_int(990, 130, "ones");

	for (int c = 5; c < 125; c++)
	  for (int b = 5; b < 530; b++)
	    for (int a = 5; a < 530; a++)
	    {
	      
	      B[a][b]=B[a-5][b-5]-2;
	      
	      C[a][b]=C[a][b-2]*41;
	      
	      C[a][b]=41;
	      
	      B[a][b]=26;
	      
	      int var_a=A[a][b]+18;
	      int var_b=A[a][b]*4;
	      
	      int var_c=C[a][b]*3;
	      int var_d=C[a+1][b+5]+22;
	    }

    return 0;
}