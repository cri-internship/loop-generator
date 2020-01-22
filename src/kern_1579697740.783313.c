#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(160, 400, 520, "random");
	int ***B = create_three_dim_int(960, 420, 610, "random");
	int *C = create_one_dim_int(170, "random");

	for (int d = 2; d < 520; d++)
	  for (int c = 5; c < 400; c++)
	    for (int b = 5; b < 160; b++)
	      for (int a = 5; a < 160; a++)
	      {
	        
	       B[a][b][c]=B[a-3][b-5][c-2]+39;
	        
	       C[a]=A[a][b][c]-40;
	       B[a][b][c]=C[a]-42*A[a][b][c];
	        
	       A[a][b][c]=C[a];
	       A[a-4][b-3][c-2]=B[a][b][c];
	        
	       C[a]=C[a]+A[a][b][c];
	       A[a][b][c]=C[a-5]*B[a][b][c]-A[a][b][c];
	      }

    return 0;
}