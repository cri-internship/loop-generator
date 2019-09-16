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

	for (int c = 0; c < 42; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 7; a < 48; a++)
	    {
	      
	      A[a-2]=A[a-7]+12;
	      
	      C[a+2][b][c]=C[a-3][b][c]/A[a];
	      
	      C[a][b][c]=C[a-1][b][c]+31;
	      
	      A[a+2]=A[a+2]*8;
	      
	      C[a][b][c]=C[a+1][b][c+8]+B[a][b]*A[a];
	      
	      C[a][b][c]=C[a+1][b][c]*46;
	      
	      A[a-3]=C[a][b][c]-B[a][b];
	      A[a-3]=C[a][b][c]+B[a][b];
	      
	      int var_a=A[a-3]*31;
	      int var_b=A[a-5]-33;
	      
	      A[a]=C[a][b][c]+B[a][b]/21;
	      
	      int var_c=C[a][b][c]*18;
	    }

    return 0;
}