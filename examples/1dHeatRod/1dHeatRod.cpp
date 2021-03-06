// 1dHeatRod.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FDMEngine.hpp"

double BC(double x, int y)
{
	return x * (y+.1);
}

int main()
{
	Mesh1D mesh;
	mesh.spacial_length = 10;
	mesh.spacial_step_size = 1;
	mesh.thermal_conductivity = 0.01;
	mesh.DirchletBoundaryEquation = BC;

	Engine1D engine;
	engine.StartSimulation(mesh);
	return 0;
}

