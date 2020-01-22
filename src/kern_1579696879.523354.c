#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(70, 780, "random");
	int **A = create_two_dim_int(950, 560, "random");
	int **D = create_two_dim_int(220, 460, "random");
	int *B = create_one_dim_int(210, "random");
	int ***C = create_three_dim_int(30, 990, 10, "random");

	for (int d = 4; d < 10; d++)
	  for (int c = 2; c < 555; c++)
	    for (int b = 3; b < 30; b++)
	      for (int a = 3; a < 30; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-2][c-4]/20;
	        
	       A[a][b]=A[a+5][b+5]*D[a][b]+B[a]-E[a][b]/C[a][b][c];
	        
	       E[a][b]=E[a+2][b+5]*3;
	        
	       E[a][b]=B[a]-A[a][b]/E[a][b];
	       A[a][b]=B[a-1]/E[a][b];
	      }

    return 0;
}