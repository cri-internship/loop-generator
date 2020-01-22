#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(640, "zeros");
	int **A = create_two_dim_int(460, 830, "zeros");
	int ***D = create_three_dim_int(40, 580, 200, "zeros");
	int ***C = create_three_dim_int(620, 740, 250, "zeros");

	for (int c = 0; c < 197; c++)
	  for (int b = 0; b < 578; b++)
	    for (int a = 0; a < 40; a++)
	    {
	      
	      C[a][b][c]=22;
	      C[a+1][b+5][c+2]=23;
	      
	      C[a][b][c]=A[a][b]-B[a];
	      
	      A[a][b]=44;
	      A[a+3][b+1]=3;
	      
	      D[a][b][c]=C[a][b][c]-A[a][b];
	      D[a][b+2][c+3]=9/B[a];
	      
	      int var_a=A[a][b]/2;
	      int var_b=A[a+1][b+5]+4;
	    }

    return 0;
}