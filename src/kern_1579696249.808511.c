#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(160, 740, "random");
	int ***C = create_three_dim_int(600, 530, 460, "random");
	int ***A = create_three_dim_int(870, 670, 100, "random");
	int ***D = create_three_dim_int(810, 560, 890, "random");
	int **E = create_two_dim_int(920, 460, "random");

	for (int d = 2; d < 95; d++)
	  for (int c = 5; c < 460; c++)
	    for (int b = 5; b < 155; b++)
	      for (int a = 5; a < 155; a++)
	      {
	        
	       E[a][b]=E[a-5][b-1]/1;
	        
	       E[a][b]=E[a-3][b-5]/42;
	        
	       E[a][b]=E[a-3][b-2]+4;
	        
	       A[a][b][c]=A[a+1][b+2][c+5]/B[a][b]+E[a][b]*D[a][b][c];
	        
	       B[a][b]=A[a][b][c]+C[a][b][c]-14;
	       B[a+5][b+5]=E[a][b];
	        
	       C[a][b][c]=A[a][b][c]*E[a][b]-C[a][b][c];
	       E[a][b]=A[a-4][b-3][c-2]+C[a][b][c]/D[a][b][c]*B[a][b];
	      }

    return 0;
}