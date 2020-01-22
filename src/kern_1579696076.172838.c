#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(930, "zeros");
	int **C = create_two_dim_int(30, 300, "zeros");
	int ***B = create_three_dim_int(810, 570, 460, "zeros");
	int ***A = create_three_dim_int(350, 820, 390, "zeros");
	int ***E = create_three_dim_int(960, 380, 630, "zeros");

	for (int b = 0; b < 818; b++)
	  for (int a = 0; a < 347; a++)
	  {
	    
	     A[a][b][a]=12;
	     A[a+3][b+2][a]=49;
	  }

    return 0;
}