#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(850, 770, 450, "zeros");
	int ***A = create_three_dim_int(910, 460, 820, "zeros");
	int *C = create_one_dim_int(300, "zeros");
	int ***B = create_three_dim_int(660, 420, 490, "zeros");

	for (int c = 1; c < 489; c++)
	  for (int b = 1; b < 419; b++)
	    for (int a = 0; a < 300; a++)
	    {
	      
	      B[a][b][c]=B[a][b-1][c-1]/A[a][b][c]+D[a][b][c];
	      
	      B[a][b][c]=B[a][b+1][c+1]*C[a]+10-C[a];
	      
	      C[a]=B[a][b][c];
	      C[a]=B[a][b][c];
	    }

    return 0;
}