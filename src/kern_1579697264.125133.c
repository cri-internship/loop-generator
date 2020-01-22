#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(570, 920, "random");
	int **C = create_two_dim_int(970, 270, "random");
	int ***B = create_three_dim_int(10, 490, 230, "random");
	int **D = create_two_dim_int(120, 760, "random");

	for (int d = 2; d < 270; d++)
	  for (int c = 5; c < 116; c++)
	    for (int b = 5; b < 116; b++)
	      for (int a = 5; a < 116; a++)
	      {
	        
	       C[a][b]=C[a-5][b-1]/D[a][b]*A[a][b]+B[a][b][c];
	        
	       D[a][b]=D[a+2][b+3]*C[a][b]-A[a][b]+B[a][b][c];
	        
	       D[a][b]=D[a+1][b+5]*C[a][b]-A[a][b];
	        
	       D[a][b]=D[a+4][b+1]/35;
	        
	       A[a][b]=B[a][b][c]*D[a][b];
	       A[a+1][b+1]=C[a][b]+D[a][b];
	        
	       D[a][b]=C[a][b]+A[a][b]*D[a][b]-B[a][b][c];
	       B[a][b][c]=C[a-4][b-2]/D[a][b];
	        
	       int var_a=D[a][b]/13;
	      }

    return 0;
}