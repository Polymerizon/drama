#include <stdio.h>
#include <chrono>
#include <thread>
using namespace std;
int main()
{
	printf("u\n");
	this_thread::sleep_for(chrono::milliseconds(60000));	
	printf("gey");
	getchar();
}
