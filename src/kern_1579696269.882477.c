#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(900, 410, 210, "random");
	int **B = create_two_dim_int(630, 70, "random");

	for (int c = 4; c < 210; c++)
	  for (int b = 4; b < 67; b++)
	    for (int a = 5; a < 626; a++)
	    {
	      
	      A[a][b][c]=A[a-2][b-4][c-2]+48;
	      
	      B[a][b]=5;
	      B[a+4][b+3]=43;
	      
	      A[a][b][c]=20;
	      
	      B[a][b]=A[a][b][c];
	      
	      A[a][b][c]=B[a][b]*49;
	      B[a][b]=B[a-1][b-4]*A[a][b][c];
	    }

    return 0;
}