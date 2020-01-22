#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(610, 160, 60, "zeros");
	int *D = create_one_dim_int(440, "zeros");
	int *B = create_one_dim_int(390, "zeros");
	int ***A = create_three_dim_int(420, 260, 300, "zeros");

	for (int d = 5; d < 60; d++)
	  for (int c = 3; c < 160; c++)
	    for (int b = 3; b < 388; b++)
	      for (int a = 3; a < 388; a++)
	      {
	        
	       A[a][b][c]=A[a][b-3][c-5]/11+B[a]*C[a][b][c];
	        
	       B[a]=B[a-2]/A[a][b][c]-D[a];
	        
	       A[a][b][c]=A[a+1][b+2][c+1]-11;
	        
	       B[a]=B[a+2]-26;
	        
	       C[a][b][c]=39;
	       C[a-3][b-3][c-5]=44;
	        
	       D[a]=23;
	       D[a-3]=34;
	        
	       C[a][b][c]=0;
	      }

    return 0;
}