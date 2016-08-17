#pragma once

#include "HE_mesh\Mesh3D.h"

class CMiniSurf
{
	float step_factor_;						//步长因子，顶点变换坐标时的距离要乘上此系数，默认0.1，用户不可更改
	float max_offset_;						//最大允许误差，当每个顶点到目标点的距离小于此值时，程序结束。用户输入
	Mesh3D *ptr_mesh_;
	std::vector<HE_vert* > *ptr_vertlist_;	//Mesh里顶点表
	std::vector<point> new_positions_;		//Mesh里各顶点的新坐标

public:
	CMiniSurf(void);
	CMiniSurf(Mesh3D *,float);
	~CMiniSurf(void);

private:
	void Init(void);						//初始化和主要流程控制
	float MakeNewPositions(void);			//计算一次各顶点的新坐标
	void WriteNewPositions(void);			//将new_positions_里的坐标写入Mesh
};

