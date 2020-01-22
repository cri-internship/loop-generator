#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(400, 230, 360, "random");
	int ***D = create_three_dim_int(890, 1000, 200, "random");
	int ***B = create_three_dim_int(660, 120, 440, "random");
	int *A = create_one_dim_int(370, "random");

	for (int c = 2; c < 200; c++)
	  for (int b = 5; b < 116; b++)
	    for (int a = 4; a < 368; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-5][c]+D[a][b][c]-C[a][b][c];
	      
	      B[a][b][c]=B[a-1][b][c-2]-14;
	      
	      A[a]=A[a+2]*B[a][b][c]+C[a][b][c];
	      
	      D[a][b][c]=46;
	      D[a][b][c]=3;
	      
	      D[a][b][c]=B[a][b][c]/A[a];
	      B[a][b][c]=B[a][b+4][c+5]+C[a][b][c]/D[a][b][c];
	    }

    return 0;
}