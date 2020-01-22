#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(70, 160, 350, "random");
	int ***B = create_three_dim_int(370, 10, 950, "random");
	int **A = create_two_dim_int(830, 300, "random");

	for (int c = 0; c < 949; c++)
	  for (int b = 2; b < 5; b++)
	    for (int a = 1; a < 369; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b+5][c+1]/C[a][b][c];
	      
	      int var_a=A[a][b]+31;
	      int var_b=A[a-1][b-2]-17;
	    }

    return 0;
}