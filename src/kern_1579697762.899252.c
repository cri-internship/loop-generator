#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(60, 800, "zeros");
	int ***B = create_three_dim_int(620, 250, 590, "zeros");
	int *A = create_one_dim_int(370, "zeros");

	for (int c = 0; c < 590; c++)
	  for (int b = 3; b < 250; b++)
	    for (int a = 5; a < 55; a++)
	    {
	      
	      A[a]=A[a-3]+C[a][b];
	      
	      B[a][b][c]=B[a-5][b-3][c]-A[a];
	      
	      C[a][b]=C[a][b-2]+0;
	      
	      B[a][b][c]=B[a+5][b][c]*A[a]/C[a][b];
	      
	      C[a][b]=B[a][b][c];
	      
	      A[a]=B[a][b][c]-C[a][b];
	      
	      int var_a=A[a]/2;
	      int var_b=A[a+5]+5;
	    }

    return 0;
}