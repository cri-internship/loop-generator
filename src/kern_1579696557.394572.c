#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(500, 340, "random");
	int *B = create_one_dim_int(520, "random");
	int ***C = create_three_dim_int(320, 460, 660, "random");
	int **A = create_two_dim_int(320, 820, "random");

	for (int b = 3; b < 458; b++)
	  for (int a = 4; a < 315; a++)
	  {
	    
	     B[a]=B[a-4]+6;
	    
	     C[a][b][a]=C[a-4][b-3][a-2]-A[a][b]+3;
	    
	     B[a]=C[a][b][a];
	    
	     C[a][b][a]=0;
	    
	     D[a][b]=B[a]-D[a][b];
	     B[a]=B[a-1]/C[a][b][a];
	  }

    return 0;
}