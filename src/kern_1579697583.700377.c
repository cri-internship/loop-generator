#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(920, "zeros");
	int **E = create_two_dim_int(30, 310, "zeros");
	int *B = create_one_dim_int(900, "zeros");
	int ***D = create_three_dim_int(10, 920, 950, "zeros");
	int **C = create_two_dim_int(60, 860, "zeros");

	for (int d = 1; d < 946; d++)
	  for (int c = 5; c < 307; c++)
	    for (int b = 3; b < 6; b++)
	      for (int a = 3; a < 6; a++)
	      {
	        
	       E[a][b]=E[a][b+3]/A[a]+C[a][b];
	        
	       B[a]=B[a+5]/37-E[a][b]+E[a][b]*A[a];
	        
	       D[a][b][c]=B[a]*B[a]-A[a]+C[a][b];
	       D[a+4][b+3][c+4]=19;
	        
	       int var_a=D[a][b][c]*30;
	       int var_b=D[a-3][b-5][c-1]*17;
	      }

    return 0;
}