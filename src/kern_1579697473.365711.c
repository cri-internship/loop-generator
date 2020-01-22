#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(560, "zeros");
	int **B = create_two_dim_int(300, 240, "zeros");
	int **D = create_two_dim_int(110, 970, "zeros");
	int ***C = create_three_dim_int(50, 410, 400, "zeros");

	for (int d = 1; d < 400; d++)
	  for (int c = 4; c < 240; c++)
	    for (int b = 3; b < 50; b++)
	      for (int a = 3; a < 50; a++)
	      {
	        
	       C[a][b][c]=C[a][b-4][c-1]*D[a][b];
	        
	       B[a][b]=B[a][b-4]+A[a]-C[a][b][c];
	        
	       A[a]=A[a+5]-18;
	        
	       D[a][b]=40;
	       D[a][b]=46;
	        
	       B[a][b]=43;
	        
	       B[a][b]=D[a][b]/B[a][b]*A[a];
	       A[a]=D[a][b]-39*B[a][b];
	      }

    return 0;
}