#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(990, 280, "ones");
	int *D = create_one_dim_int(540, "ones");
	int *A = create_one_dim_int(680, "ones");
	int *C = create_one_dim_int(320, "ones");

	for (int c = 1; c < 277; c++)
	  for (int b = 3; b < 540; b++)
	    for (int a = 3; a < 540; a++)
	    {
	      
	      B[a][b]=D[a]/C[a];
	      B[a+4][b+1]=A[a]-C[a];
	      
	      D[a]=12;
	      D[a]=8;
	      
	      A[a]=B[a][b]/D[a];
	      C[a]=B[a+2][b+3]*27+A[a];
	      
	      int var_a=A[a]/25;
	      int var_b=A[a-3]*26;
	      
	      int var_c=B[a][b]*33;
	      int var_d=B[a][b-1]*36;
	    }

    return 0;
}