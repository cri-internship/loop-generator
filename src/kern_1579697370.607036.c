#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(450, 430, 600, "random");
	int ***C = create_three_dim_int(210, 170, 430, "random");
	int ***B = create_three_dim_int(600, 980, 130, "random");
	int ***E = create_three_dim_int(590, 960, 940, "random");
	int ***D = create_three_dim_int(380, 290, 740, "random");

	for (int c = 5; c < 128; c++)
	  for (int b = 3; b < 978; b++)
	    for (int a = 5; a < 598; a++)
	    {
	      
	      B[a][b][c]=B[a-5][b-2][c-5]/D[a][b][c];
	      
	      B[a][b][c]=B[a+2][b+2][c+2]-46;
	    }

    return 0;
}