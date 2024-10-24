#pragma once

class DynamicArrary {
public:
	int size;
	int* ptr;

	DynamicArrary();
	DynamicArrary(int size);
	virtual ~DynamicArrary();


	void setAt(int position, int val);
	int getAt(int position);
};