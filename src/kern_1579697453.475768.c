#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(840, "zeros");
	int *B = create_one_dim_int(790, "zeros");
	int ***A = create_three_dim_int(640, 330, 70, "zeros");

	for (int c = 5; c < 787; c++)
	  for (int b = 5; b < 787; b++)
	    for (int a = 5; a < 787; a++)
	    {
	      
	      C[a]=18;
	      C[a-5]=35;
	      
	      C[a]=14;
	      
	      int var_a=B[a]/47;
	      int var_b=B[a+3]-16;
	      
	      B[a]=C[a]*B[a]/A[a][b][c];
	      A[a][b][c]=C[a-3]-B[a]*A[a][b][c];
	    }

    return 0;
}