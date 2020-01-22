#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(40, 160, "ones");
	int ***C = create_three_dim_int(250, 700, 800, "ones");
	int ***A = create_three_dim_int(430, 20, 340, "ones");

	for (int c = 5; c < 335; c++)
	  for (int b = 5; b < 20; b++)
	    for (int a = 3; a < 36; a++)
	    {
	      
	      C[a][b][c]=C[a-3][b][c-5]+43;
	      
	      B[a][b]=19;
	      B[a-2][b-5]=5;
	      
	      A[a][b][c]=C[a][b][c]*B[a][b];
	      A[a][b][c+5]=B[a][b];
	      
	      int var_a=C[a][b][c]/23;
	      int var_b=C[a-1][b-2][c-5]+17;
	      
	      int var_c=B[a][b]+35;
	      int var_d=B[a+3][b]/15;
	      
	      B[a][b]=B[a][b]-A[a][b][c]/A[a][b][c];
	      C[a][b][c]=B[a+4][b+2]+A[a][b][c];
	    }

    return 0;
}