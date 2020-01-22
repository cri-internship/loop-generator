#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(340, "zeros");
	int ***A = create_three_dim_int(550, 590, 320, "zeros");
	int ***C = create_three_dim_int(80, 350, 800, "zeros");
	int *B = create_one_dim_int(410, "zeros");

	for (int d = 4; d < 320; d++)
	  for (int c = 5; c < 590; c++)
	    for (int b = 5; b < 335; b++)
	      for (int a = 5; a < 335; a++)
	      {
	        
	       A[a][b][c]=A[a-5][b-5][c-1]-B[a]*D[a];
	        
	       D[a]=D[a-2]*12;
	        
	       D[a]=D[a-1]+C[a][b][c];
	        
	       D[a]=D[a+5]*16;
	        
	       int var_a=A[a][b][c]*50;
	       int var_b=A[a-5][b-2][c-4]-31;
	        
	       int var_c=D[a]/12;
	       int var_d=D[a-3]+29;
	      }

    return 0;
}