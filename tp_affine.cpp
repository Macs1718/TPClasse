#pragma once

//    Géométrie affine 3D
//   =====================
// 1. Ecrire une classe coordonnées
//    homogènes ( x,y,z,w) où w=0
//    pour les vecteurs, et w=1 pour
//    les points.
// 2. Dérivée la classe en classe
//    vecteur et classe point
// 3. Mettre tout cela en template
//    pour le type scalaire des coords
//
//     Pour les spécifs, voir le main ;-)

int main()
{
	Geometry::point o{0.,0.,0.};
	Geometry::point i{1.,0.,0.};
	Geometry::point j{0.,1.,0.};
	Geometry::vector oi{o,i};
	Geometry::vector oj{o,j};
	Geometry::vector ok = oi ^ oj; // <-- produit vectoriel
	Geometry::vector u{2.,1.,3.};
	Geometry::point p = i + u;// <-- translation
	std::cout << "u : " << std::string(u) << std::endl;
	std::cout << "p : " << std::string(p) << std::endl;
	return 1;
}