#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(60, 770, "ones");
	int ***B = create_three_dim_int(20, 70, 360, "ones");
	int *A = create_one_dim_int(940, "ones");
	int *C = create_one_dim_int(140, "ones");

	for (int d = 5; d < 360; d++)
	  for (int c = 5; c < 70; c++)
	    for (int b = 4; b < 20; b++)
	      for (int a = 4; a < 20; a++)
	      {
	        
	       C[a]=C[a-3]-B[a][b][c];
	        
	       int var_a=A[a]/26;
	       A[a]=7;
	        
	       D[a][b]=D[a+2][b+1]-6;
	        
	       B[a][b][c]=D[a][b]/12+C[a];
	       B[a-2][b-1][c-5]=A[a]+D[a][b]*C[a];
	        
	       int var_b=C[a]*22;
	        
	       int var_d=D[a][b]/12;
	       int var_e=D[a-4][b-5]+37;
	      }

    return 0;
}