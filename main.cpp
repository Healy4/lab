#include <stdlib.h>
#include <stdio.h>
#include "My_app.h"

int main()
{
	My_app obj(nullptr);
	obj.buildTree   ( );
	return(obj.exec() );
}
