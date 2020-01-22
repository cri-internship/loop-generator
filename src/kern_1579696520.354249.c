#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(500, 70, 490, "random");
	int *D = create_one_dim_int(990, "random");
	int ***E = create_three_dim_int(680, 730, 170, "random");
	int *A = create_one_dim_int(700, "random");
	int **B = create_two_dim_int(290, 920, "random");

	for (int d = 0; d < 490; d++)
	  for (int c = 0; c < 66; c++)
	    for (int b = 0; b < 500; b++)
	      for (int a = 0; a < 500; a++)
	      {
	        
	       D[a]=22;
	       D[a]=26;
	        
	       int var_a=A[a]-11;
	       int var_b=A[a+3]-34;
	        
	       int var_c=A[a]-31;
	       int var_d=A[a+4]-4;
	        
	       int var_e=C[a][b][c]+38;
	       int var_f=C[a][b+4][c]+31;
	      }

    return 0;
}