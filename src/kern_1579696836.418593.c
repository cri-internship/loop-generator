#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(980, 530, "zeros");
	int *C = create_one_dim_int(850, "zeros");
	int ***B = create_three_dim_int(220, 240, 610, "zeros");
	int ***A = create_three_dim_int(390, 490, 680, "zeros");

	for (int c = 0; c < 608; c++)
	  for (int b = 4; b < 237; b++)
	    for (int a = 2; a < 216; a++)
	    {
	      
	      C[a]=C[a-1]+D[a][b];
	      
	      D[a][b]=D[a-2][b-4]/44;
	      
	      D[a][b]=D[a-2][b-3]/46;
	      
	      B[a][b][c]=B[a+4][b+3][c+2]-24;
	    }

    return 0;
}