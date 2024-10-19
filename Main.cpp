#include <iostream>
#include <math.h>

#include <Vectors/Vector3D.h>

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

	return 0;
}