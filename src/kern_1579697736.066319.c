#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(320, 120, "zeros");
	int ***B = create_three_dim_int(270, 20, 520, "zeros");
	int **C = create_two_dim_int(870, 570, "zeros");
	int ***D = create_three_dim_int(470, 520, 740, "zeros");
	int ***A = create_three_dim_int(850, 390, 230, "zeros");

	for (int c = 0; c < 735; c++)
	  for (int b = 0; b < 520; b++)
	    for (int a = 0; a < 466; a++)
	    {
	      
	      D[a][b][c]=D[a+4][b][c+5]*50;
	    }

    return 0;
}