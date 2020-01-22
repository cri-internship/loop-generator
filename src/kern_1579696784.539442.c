#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(620, 820, 320, "random");
	int *C = create_one_dim_int(940, "random");
	int *E = create_one_dim_int(720, "random");
	int ***B = create_three_dim_int(300, 760, 80, "random");
	int ***A = create_three_dim_int(290, 20, 740, "random");

	for (int d = 0; d < 79; d++)
	  for (int c = 0; c < 15; c++)
	    for (int b = 5; b < 287; b++)
	      for (int a = 5; a < 287; a++)
	      {
	        
	       C[a]=C[a-5]/A[a][b][c]-E[a];
	        
	       C[a]=B[a][b][c]-D[a][b][c]/A[a][b][c];
	        
	       D[a][b][c]=43;
	       D[a+2][b+2][c+5]=2;
	        
	       int var_a=A[a][b][c]*6;
	       int var_b=A[a+3][b+5][c+4]-5;
	        
	       A[a][b][c]=C[a]*D[a][b][c]+E[a];
	       B[a][b][c]=C[a+3]+B[a][b][c]-4;
	        
	       int var_c=C[a]-21;
	        
	       C[a]=B[a][b][c]-C[a]+32;
	       D[a][b][c]=B[a+3][b+2][c+1]/42;
	      }

    return 0;
}