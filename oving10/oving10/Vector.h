#pragma once

#include <iostream>
#include "Matrix.h"

class Vector : public Matrix {
	public:
		Vector();
		explicit Vector(int nRows);
		Vector(const Matrix & other);
		void set(int row, double value);
		double get(int row) const;
		double dot(const Vector &rhs) const;
		double lengthSquared() const;
		double length() const;
};	