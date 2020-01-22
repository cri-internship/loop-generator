#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(970, 320, "zeros");
	int *B = create_one_dim_int(970, "zeros");
	int *C = create_one_dim_int(300, "zeros");
	int ***A = create_three_dim_int(690, 10, 470, "zeros");

	for (int d = 4; d < 465; d++)
	  for (int c = 5; c < 9; c++)
	    for (int b = 2; b < 297; b++)
	      for (int a = 2; a < 297; a++)
	      {
	        
	       B[a]=B[a-1]/16;
	        
	       A[a][b][c]=31;
	       A[a][b+1][c+5]=39;
	        
	       C[a]=13;
	       C[a+3]=38;
	        
	       C[a]=23;
	        
	       A[a][b][c]=A[a][b][c]/B[a]*C[a];
	       C[a]=A[a][b-2][c]+B[a];
	        
	       int var_a=B[a]/11;
	       int var_b=B[a-2]+43;
	        
	       int var_c=A[a][b][c]/36;
	       int var_d=A[a][b-5][c-4]*23;
	      }

    return 0;
}