#pragma once
#include <string>
using namespace std;

class CustomException {
private:
	const char* errorMessage;
	int errorCode;
	void* errorAddress;

public:
	CustomException(int errorCode,  const char* errorMessage,const void* address);
	int getErrCode() const;
	const char* getErrMessage();
	const void* getAddr();

};