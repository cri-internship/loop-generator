#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(50, 980, "ones");
	int ***B = create_three_dim_int(410, 930, 940, "ones");
	int ***A = create_three_dim_int(780, 670, 230, "ones");

	for (int d = 1; d < 229; d++)
	  for (int c = 5; c < 669; c++)
	    for (int b = 5; b < 49; b++)
	      for (int a = 5; a < 49; a++)
	      {
	        
	       B[a][b][c]=B[a-5][b-5][c-1]+A[a][b][c]*C[a][b];
	        
	       C[a][b]=C[a+1][b]/38;
	        
	       B[a][b][c]=B[a+1][b+3][c+5]/C[a][b]*A[a][b][c];
	        
	       A[a][b][c]=A[a+3][b+1][c+1]+29;
	        
	       B[a][b][c]=B[a+3][b+5][c]*0;
	      }

    return 0;
}