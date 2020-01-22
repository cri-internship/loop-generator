#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(240, 480, "zeros");
	int ***B = create_three_dim_int(40, 20, 560, "zeros");
	int **C = create_two_dim_int(380, 240, "zeros");

	for (int d = 0; d < 560; d++)
	  for (int c = 3; c < 20; c++)
	    for (int b = 4; b < 40; b++)
	      for (int a = 4; a < 40; a++)
	      {
	        
	       A[a][b]=A[a-3][b]*C[a][b];
	        
	       A[a][b]=A[a+5][b+3]+1;
	        
	       A[a][b]=A[a+1][b+2]/B[a][b][c]*28;
	        
	       C[a][b]=C[a+5][b+2]+36;
	        
	       C[a][b]=32;
	        
	       int var_a=B[a][b][c]+36;
	       int var_b=B[a-3][b-1][c]-19;
	      }

    return 0;
}