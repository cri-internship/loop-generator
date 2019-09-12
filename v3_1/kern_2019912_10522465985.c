#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int *A = create_one_dim_int(100, "random");
	int **B = create_two_dim_int(50, 50, "random");

	for (int c = 0; c < 42; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 3; a < 49; a++)
	    {
	      
	      int var_a=A[a+2]+A[a+5]+36;
	      A[a+2]=23;
	      
	      C[a][b][c]=C[a+1][b][c+8]/28;
	      
	      C[a][b][c]=C[a+1][b][c]/17;
	      
	      A[a-3]=25;
	      A[a-3]=C[a][b][c];
	      
	      int var_b=A[a-3]*29;
	      int var_c=A[a-1]*24;
	      
	      A[a]=C[a][b][c]/A[a];
	      
	      int var_d=C[a][b][c]-24;
	      int var_e=C[a-1][b][c]*40;
	    }

    return 0;
}