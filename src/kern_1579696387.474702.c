#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(450, 910, 640, "random");
	int ***C = create_three_dim_int(500, 560, 920, "random");
	int ***A = create_three_dim_int(430, 230, 640, "random");
	int ***D = create_three_dim_int(410, 680, 550, "random");
	int **E = create_two_dim_int(40, 800, "random");

	for (int c = 3; c < 638; c++)
	  for (int b = 5; b < 226; b++)
	    for (int a = 0; a < 430; a++)
	    {
	      
	      A[a][b][c]=A[a][b-5][c-3]-35;
	      
	      A[a][b][c]=A[a][b+4][c+2]+3/C[a][b][c]-E[a][b]*D[a][b][c];
	    }

    return 0;
}