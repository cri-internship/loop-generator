#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(1000, 250, "random");
	int ***B = create_three_dim_int(260, 420, 360, "random");
	int ***C = create_three_dim_int(10, 100, 40, "random");
	int ***A = create_three_dim_int(890, 580, 790, "random");

	for (int c = 5; c < 37; c++)
	  for (int b = 4; b < 95; b++)
	    for (int a = 5; a < 5; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+5][c+3]+34-D[a][b]/A[a][b][c];
	      
	      B[a][b][c]=B[a+5][b+1][c]-30;
	      
	      D[a][b]=D[a+5][b+3]-17;
	      
	      B[a][b][c]=10;
	      
	      C[a][b][c]=7;
	    }

    return 0;
}