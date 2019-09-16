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
	    for (int a = 7; a < 48; a++)
	    {
	      
	      A[a-2]=A[a-7]+33;
	      
	      C[a+2][b][c]=C[a-3][b][c]+A[a];
	      
	      C[a][b][c]=C[a-1][b][c]/1;
	      
	      A[a+2]=A[a+2]/41;
	      
	      C[a][b][c]=C[a+1][b][c+8]*B[a][b]-A[a];
	      
	      C[a][b][c]=C[a+1][b][c]/1;
	      
	      A[a-3]=C[a][b][c]-35;
	      A[a-3]=C[a][b][c]/B[a][b];
	      
	      int var_a=A[a-3]/27;
	      int var_b=A[a-5]*37;
	      
	      A[a]=C[a][b][c]*A[a];
	      
	      int var_c=C[a][b][c]-44;
	    }

    return 0;
}