#include "customException.h"

CustomException::CustomException(int errorCode, const char* errorMessage,const void* errorAddess)
	:errorCode(errorCode),  errorMessage(errorMessage)
{

}

int CustomException::getErrCode() const
{
	 return errorCode; 
}


const char*  CustomException::getErrMessage()
{
	return errorMessage;
}

const void* CustomException::getAddr()
{
	return errorAddress;
}
