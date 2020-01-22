#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(280, 670, "random");
	int ***C = create_three_dim_int(190, 610, 250, "random");
	int **B = create_two_dim_int(460, 760, "random");

	for (int b = 2; b < 610; b++)
	  for (int a = 4; a < 190; a++)
	  {
	    
	     B[a][b]=B[a-4][b-2]+30;
	    
	     A[a][b]=A[a+1][b+3]+B[a][b]*C[a][b][a];
	    
	     A[a][b]=C[a][b][a]/10;
	    
	     C[a][b][a]=A[a][b]-B[a][b];
	     C[a-1][b-1][a-2]=A[a][b]-B[a][b];
	  }

    return 0;
}