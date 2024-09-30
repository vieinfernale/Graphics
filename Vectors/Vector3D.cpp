#include <iostream>
#include <math.h>

struct Vector3D
{
	float		x, y, z;                                // Vector's Components - V = (Vx, Vy, Vz)

	Vector3D(float a, float b, float c)                 // Constructor - Assignment
	{
		x = a;
		y = b;
		z = c;
	}

	float& operator [](int i) 
	{                        
		switch(i) 
		{
			case 0: return x; 
			case 1: return y; 
			case 2: return z; 
			default: throw "Index out of boundary";
		}
	}

	/* float& operator [](int i)                        // Overloaded Operator [] Address and Index
	{
		return ((&x)[i]);
	}

	const float& operator [](int i) const
	{
		return ((&x)[i]);
	}*/

	/*
	[] is accessing the value at the address of x (&x) 
	+ the offset given through the index i.

	(&x)[0] == x (&x)[1] == y (&x)[2] == z
	*/

	Vector3D& operator *=(float s)                      // Overloaded Operator *= Scalar Multiplication
	{
		x *= s;
		y *= s;
		z *= s;
		return (*this);
	}

	Vector3D& operator /=(float s)                      
	{
		s = 1.0F / s;
		x *= s;
		y *= s;
		z *= s;
		return (*this);
	}

	Vector3D& operator +=(const Vector3D& v)         
	{
		x += v.x;
		y += v.y;
		z += v.z;
		return (*this);
	}

	Vector3D& operator -=(const Vector3D& v)
	{
		x -= v.x;
		y -= v.y;
		z -= v.z;
		return (*this);
	}
};

/*
*this = Object and  this = &Object.
The object's address (&x, &y, &z) of the struct is available from within the member function as the this pointer.
The expression return *this is commonly used to return the current object from a member function.
While the overload operator function goes inside struct, the inline overload operator goes outside of struct.
*/

inline Vector3D operator *(const Vector3D& v, float s)
{
	return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline Vector3D operator /(const Vector3D& v, float s)
{
	s = 1.0F / s;
	return (Vector3D(v.x * s, v.y * s, v.z * s));
}

inline float magnitude(const Vector3D& v)          
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

inline Vector3D normalize(const Vector3D& v)
{
	return (Vector3D(v/magnitude(v)));
}

inline Vector3D operator -(const Vector3D& v)                   
{
	return (Vector3D(-v.x, -v.y, -v.z));
}

inline Vector3D operator +(const Vector3D& v, const Vector3D& v2)
{
	return (Vector3D(v.x + v2.x, v.y + v2.y, v.z + v2.z));
}

inline Vector3D operator -(const Vector3D& v, const Vector3D& v2)
{
	return (Vector3D(v.x - v2.x, v.y - v2.y, v.z - v2.z));
}

int main()
{	
    Vector3D v(1, 2, 3); 

	// Components
    std::cout << v.x << " " << v.y << " " << v.z << "\n";

	// Index
	std::cout << v[0] << " " << v[1] << " " << v[2] << "\n";
    
	// Magnitude
	std::cout << magnitude(v) << std::endl;

	// Unit Vector
	v = normalize(v);
	std::cout << v.x << " " << v.y << " " << v.z << "\n";
	std::cout << magnitude(v) << std::endl;

	// Opposite direction
	Vector3D v1 = -v;
	std::cout << v1.x << " " << v1.y << " " << v1.z << "\n";

	// Multiplication and Division
    v *= 10;
	std::cout << v.x << " " << v.y << " " << v.z << "\n";

    v /= 10;
	std::cout << v.x << " " << v.y << " " << v.z << "\n";

    Vector3D v2 = v*2;
    std::cout << v2.x << " " << v2.y << " " << v2.z << "\n";

 	v2 = v/2;
    std::cout << v2.x << " " << v2.y << " " << v2.z << "\n";

	// Addition
	Vector3D v3(1, 2, 3);
	Vector3D v4(2, 3, 4);
	v4 += v3;
	std::cout << v4.x << " " << v4.y << " " << v4.z << "\n";

	Vector3D v5(1, 2, 3);
	Vector3D v6(2, 3, 4);
	Vector3D  v7 = v6 + v5;
	std::cout <<  v7.x << " " <<  v7.y << " " <<  v7.z << "\n";
}