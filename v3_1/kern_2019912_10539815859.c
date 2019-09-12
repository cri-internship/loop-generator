#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(100, "random");
	int ***C = create_three_dim_int(50, 50, 50, "random");
	int **B = create_two_dim_int(50, 50, "random");

	for (int c = 0; c < 42; c++)
	  for (int b = 0; b < 50; b++)
	    for (int a = 3; a < 49; a++)
	    {
	      
	      A[a+2]=A[a+3]-A[a+5]*26;
	      
	      C[a][b][c]=C[a+1][b][c+8]*A[a];
	      
	      C[a][b][c]=C[a+1][b][c]/29;
	      
	      A[a-3]=C[a][b][c];
	      A[a-3]=39+B[a][b];
	      
	      int var_a=A[a-3]*49;
	      int var_b=A[a-1]-29;
	      
	      A[a]=C[a][b][c]*A[a]/B[a][b];
	      
	      int var_c=C[a][b][c]+20;
	    }

    return 0;
}