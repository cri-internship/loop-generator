#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(170, "ones");
	int ***A = create_three_dim_int(330, 710, 1000, "ones");
	int **B = create_two_dim_int(570, 430, "ones");
	int **C = create_two_dim_int(30, 50, "ones");

	for (int c = 4; c < 1000; c++)
	  for (int b = 1; b < 430; b++)
	    for (int a = 4; a < 330; a++)
	    {
	      
	      A[a][b][c]=D[a]/B[a][b];
	      A[a-4][b-1][c-1]=C[a][b]-B[a][b];
	      
	      int var_a=A[a][b][c]*48;
	      int var_b=A[a][b][c-4]*23;
	      
	      int var_c=B[a][b]*24;
	      int var_d=B[a-3][b-1]*15;
	    }

    return 0;
}