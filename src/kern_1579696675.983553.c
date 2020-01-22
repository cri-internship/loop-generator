#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(550, 900, "zeros");
	int *A = create_one_dim_int(720, "zeros");
	int ***B = create_three_dim_int(500, 240, 910, "zeros");

	for (int c = 1; c < 895; c++)
	  for (int b = 2; b < 550; b++)
	    for (int a = 2; a < 550; a++)
	    {
	      
	      C[a][b]=C[a][b+1]/A[a];
	      
	      A[a]=B[a][b][c]-45;
	      A[a+5]=C[a][b]/B[a][b][c];
	      
	      C[a][b]=A[a];
	      
	      int var_a=C[a][b]*14;
	      int var_b=C[a-1][b-1]*1;
	      
	      int var_c=A[a]/25;
	      int var_d=A[a-2]/22;
	    }

    return 0;
}