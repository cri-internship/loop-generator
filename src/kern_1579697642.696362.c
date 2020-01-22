#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(80, "zeros");
	int **D = create_two_dim_int(600, 80, "zeros");
	int ***C = create_three_dim_int(720, 730, 40, "zeros");
	int **B = create_two_dim_int(1000, 240, "zeros");

	for (int d = 3; d < 40; d++)
	  for (int c = 5; c < 78; c++)
	    for (int b = 4; b < 75; b++)
	      for (int a = 4; a < 75; a++)
	      {
	        
	       C[a][b][c]=C[a-2][b-5][c-3]/A[a]-D[a][b]*B[a][b];
	        
	       C[a][b][c]=C[a-1][b-4][c]+14;
	        
	       D[a][b]=D[a+5][b+2]-0*B[a][b];
	        
	       A[a]=27;
	       A[a-4]=37;
	        
	       B[a][b]=D[a][b]-46;
	       C[a][b][c]=D[a+1][b+1]+C[a][b][c];
	        
	       int var_a=A[a]*13;
	       int var_b=A[a+5]/50;
	      }

    return 0;
}