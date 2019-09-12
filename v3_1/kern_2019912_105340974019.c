#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int **B = create_two_dim_int(50, 50, "random");
	int *A = create_one_dim_int(100, "random");

	for (int c = 0; c < 50; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 5; a < 49; a++)
	    {
	      
	      A[a-3]=C[a][b][c]/B[a][b];
	      A[a-3]=7;
	      
	      C[a][b][c]=A[a]/24;
	      C[a-1][b][c]=A[a]-B[a][b];
	      
	      C[a][b][c]=46;
	      
	      int var_a=A[a-3]-27;
	      int var_b=A[a-5]*17;
	      
	      B[a][b]=C[a][b][c]*A[a]-B[a][b];
	      A[a]=C[a+1][b][c]-A[a]*50;
	      
	      int var_c=C[a][b][c]-36;
	      int var_d=C[a-1][b][c]-20;
	    }

    return 0;
}