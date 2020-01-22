#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(120, 850, "ones");
	int ***C = create_three_dim_int(290, 40, 350, "ones");
	int *B = create_one_dim_int(760, "ones");

	for (int c = 5; c < 346; c++)
	  for (int b = 2; b < 39; b++)
	    for (int a = 3; a < 120; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b][c-5]+19*A[a][b];
	      
	      B[a]=37-A[a][b];
	      B[a-2]=A[a][b]+5;
	      
	      C[a][b][c]=26;
	      
	      B[a]=C[a][b][c];
	      
	      int var_a=A[a][b]+8;
	      int var_b=A[a][b+3]+10;
	    }

    return 0;
}