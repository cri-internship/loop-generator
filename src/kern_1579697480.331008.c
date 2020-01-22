#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(560, "random");
	int ***A = create_three_dim_int(710, 890, 250, "random");
	int **C = create_two_dim_int(300, 140, "random");
	int ***D = create_three_dim_int(570, 640, 520, "random");

	for (int b = 5; b < 136; b++)
	  for (int a = 3; a < 300; a++)
	  {
	    
	     A[a][b][a]=A[a][b-5][a-1]+33;
	    
	     B[a]=B[a+1]-D[a][b][a]*C[a][b]+A[a][b][a];
	    
	     C[a][b]=C[a][b+4]+B[a]/B[a];
	    
	     B[a]=A[a][b][a]+37;
	    
	     D[a][b][a]=36;
	     D[a+3][b+1][a+2]=48;
	    
	     C[a][b]=A[a][b][a]*D[a][b][a];
	  }

    return 0;
}