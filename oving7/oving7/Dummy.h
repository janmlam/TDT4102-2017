#pragma once

class Dummy {
	public:
		int *num;
		Dummy() {
			num = new int(0);
		}
		~Dummy() {
			delete num;
		}
		Dummy operator=(const Dummy & rhs);
};

void dummyTest();