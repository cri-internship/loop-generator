#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(530, "zeros");
	int ***A = create_three_dim_int(620, 850, 470, "zeros");
	int **C = create_two_dim_int(750, 660, "zeros");

	for (int c = 0; c < 468; c++)
	  for (int b = 1; b < 660; b++)
	    for (int a = 5; a < 528; a++)
	    {
	      
	      C[a][b]=C[a-5][b-1]*29;
	      
	      A[a][b][c]=A[a+5][b+3][c+2]+25;
	      
	      B[a]=B[a+2]/A[a][b][c];
	      
	      B[a]=32;
	      
	      C[a][b]=B[a]*A[a][b][c];
	      
	      C[a][b]=B[a]/C[a][b];
	      
	      int var_a=B[a]-27;
	      int var_b=B[a-4]*12;
	    }

    return 0;
}