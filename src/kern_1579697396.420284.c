#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(440, "zeros");
	int ***D = create_three_dim_int(750, 70, 740, "zeros");
	int ***A = create_three_dim_int(930, 410, 560, "zeros");
	int ***B = create_three_dim_int(80, 760, 420, "zeros");

	for (int c = 0; c < 420; c++)
	  for (int b = 0; b < 755; b++)
	    for (int a = 0; a < 80; a++)
	    {
	      
	      B[a][b][c]=B[a][b+5][c]/21;
	    }

    return 0;
}