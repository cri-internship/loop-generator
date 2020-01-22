#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(510, 370, 480, "random");
	int ***B = create_three_dim_int(270, 100, 740, "random");

	for (int b = 5; b < 100; b++)
	  for (int a = 2; a < 270; a++)
	  {
	    
	     B[a][b][a]=18;
	     B[a][b-5][a-2]=7;
	  }

    return 0;
}