#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(310, 790, "zeros");
	int ***D = create_three_dim_int(280, 820, 940, "zeros");
	int *B = create_one_dim_int(700, "zeros");
	int *A = create_one_dim_int(230, "zeros");

	for (int c = 4; c < 940; c++)
	  for (int b = 3; b < 785; b++)
	    for (int a = 5; a < 230; a++)
	    {
	      
	      A[a]=A[a-4]*46+B[a];
	      
	      B[a]=B[a-3]/24;
	      
	      B[a]=C[a][b]/A[a]*D[a][b][c];
	      
	      B[a]=48;
	      
	      int var_b=C[a][b]-38;
	      int var_c=C[a+1][b+5]*50;
	      
	      A[a]=D[a][b][c]/22;
	      C[a][b]=D[a][b-3][c-4]+B[a]*9;
	      
	      B[a]=C[a][b]-D[a][b][c]+B[a];
	      B[a]=C[a-5][b-3]*B[a]-A[a];
	    }

    return 0;
}