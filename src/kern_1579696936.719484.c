#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(370, 590, 10, "random");
	int ***B = create_three_dim_int(820, 510, 390, "random");

	for (int b = 4; b < 510; b++)
	  for (int a = 5; a < 368; a++)
	  {
	    
	     A[a][b][a]=A[a+2][b+5][a+1]/24;
	    
	     B[a][b][a]=A[a][b][a];
	     B[a-2][b-2][a-2]=46;
	    
	     B[a][b][a]=A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]*B[a][b][a];
	     B[a][b][a]=A[a][b-4][a-4]/B[a][b][a];
	  }

    return 0;
}