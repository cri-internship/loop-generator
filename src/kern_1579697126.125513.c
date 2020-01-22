#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(610, 170, 810, "zeros");
	int **B = create_two_dim_int(780, 780, "zeros");
	int **D = create_two_dim_int(570, 300, "zeros");
	int **A = create_two_dim_int(630, 370, "zeros");

	for (int c = 0; c < 807; c++)
	  for (int b = 0; b < 168; b++)
	    for (int a = 0; a < 570; a++)
	    {
	      
	      B[a][b]=B[a+2][b+5]+8;
	      
	      C[a][b][c]=C[a+4][b+2][c+3]-34;
	      
	      D[a][b]=31;
	      D[a][b+2]=17;
	      
	      B[a][b]=12;
	    }

    return 0;
}