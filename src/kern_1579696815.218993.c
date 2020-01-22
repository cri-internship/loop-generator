#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(950, "ones");
	int ***B = create_three_dim_int(160, 190, 700, "ones");
	int ***C = create_three_dim_int(10, 880, 460, "ones");
	int ***A = create_three_dim_int(110, 720, 790, "ones");

	for (int d = 4; d < 457; d++)
	  for (int c = 5; c < 190; c++)
	    for (int b = 5; b < 5; b++)
	      for (int a = 5; a < 5; a++)
	      {
	        
	       A[a][b][c]=A[a-3][b-5][c-4]+16*C[a][b][c]/B[a][b][c];
	        
	       B[a][b][c]=B[a-2][b-2][c-1]+5;
	        
	       B[a][b][c]=B[a+2][b][c]-33;
	        
	       D[a]=D[a+5]+A[a][b][c]-C[a][b][c];
	        
	       C[a][b][c]=7;
	       C[a+5][b+2][c+3]=12;
	        
	       A[a][b][c]=18;
	        
	       D[a]=40;
	      }

    return 0;
}