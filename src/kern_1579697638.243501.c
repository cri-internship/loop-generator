#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(190, 230, "random");
	int ***B = create_three_dim_int(640, 30, 740, "random");
	int ***A = create_three_dim_int(950, 90, 150, "random");

	for (int d = 5; d < 145; d++)
	  for (int c = 1; c < 85; c++)
	    for (int b = 5; b < 185; b++)
	      for (int a = 5; a < 185; a++)
	      {
	        
	       C[a][b]=C[a-5][b]*A[a][b][c];
	        
	       A[a][b][c]=A[a-2][b-1][c-5]/30;
	        
	       C[a][b]=C[a+2][b+1]+26-B[a][b][c];
	        
	       C[a][b]=C[a+5][b+5]+5;
	        
	       A[a][b][c]=A[a+4][b+4][c+5]+29;
	        
	       A[a][b][c]=C[a][b]/B[a][b][c];
	       B[a][b][c]=C[a][b+1]*A[a][b][c]/B[a][b][c];
	      }

    return 0;
}