// TBB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <tbb\atomic.h>

int main()
{
	tbb::atomic<int> a;
	a.compare_and_swap(1,2);
    return 0;
}

