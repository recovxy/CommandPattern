//main.cpp
#include <iostream>
#include "ConcreteCommand.h"
#include "Invoker.h"
#include "Receiver.h"

using namespace std;

int main(int argc, char* argv[])
{
	Receiver* pReceiver = new Receiver();
	ConcreteCommand* pCommand = new ConcreteCommand(pReceiver);
	Invoker* pInvoker = new Invoker(pCommand);
	pInvoker->call();

	delete pInvoker;
	delete pCommand;
	delete pReceiver;
	return 0;
}