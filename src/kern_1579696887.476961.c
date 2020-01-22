#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(520, 290, 270, "ones");
	int *A = create_one_dim_int(20, "ones");
	int **E = create_two_dim_int(40, 680, "ones");
	int ***D = create_three_dim_int(620, 530, 490, "ones");
	int ***C = create_three_dim_int(750, 310, 970, "ones");

	for (int b = 0; b < 526; b++)
	  for (int a = 0; a < 615; a++)
	  {
	    
	     D[a][b][a]=D[a+5][b+3][a+4]*12;
	    
	     D[a][b][a]=0;
	  }

    return 0;
}