#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(890, "zeros");
	int ***D = create_three_dim_int(930, 980, 480, "zeros");
	int **C = create_two_dim_int(430, 920, "zeros");
	int **B = create_two_dim_int(390, 590, "zeros");

	for (int d = 4; d < 588; d++)
	  for (int c = 5; c < 388; c++)
	    for (int b = 5; b < 388; b++)
	      for (int a = 5; a < 388; a++)
	      {
	        
	       B[a][b]=B[a-5][b]-42;
	        
	       C[a][b]=C[a-2][b-4]/D[a][b][c];
	        
	       C[a][b]=45;
	        
	       A[a]=18;
	       A[a]=30;
	        
	       B[a][b]=C[a][b]*A[a];
	        
	       C[a][b]=A[a]-D[a][b][c];
	       A[a]=A[a-2]*B[a][b]/D[a][b][c]-8;
	      }

    return 0;
}