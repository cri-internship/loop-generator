#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(430, 440, 270, "ones");
	int ***C = create_three_dim_int(40, 880, 900, "ones");
	int ***E = create_three_dim_int(180, 490, 670, "ones");
	int ***B = create_three_dim_int(810, 530, 940, "ones");
	int **D = create_two_dim_int(160, 350, "ones");

	for (int b = 5; b < 350; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     C[a][b][a]=C[a][b-5][a-2]*15;
	    
	     A[a][b][a]=A[a-5][b-4][a-4]+29;
	    
	     D[a][b]=42;
	     D[a][b-1]=24;
	    
	     B[a][b][a]=10+A[a][b][a]/D[a][b]-C[a][b][a];
	     B[a-2][b-4][a-3]=C[a][b][a]*E[a][b][a];
	  }

    return 0;
}