#pragma once

#include "HE_mesh\Mesh3D.h"

class CMiniSurf
{
	float step_factor_;						//�������ӣ�����任����ʱ�ľ���Ҫ���ϴ�ϵ����Ĭ��0.1���û����ɸ���
	float max_offset_;						//�����������ÿ�����㵽Ŀ���ľ���С�ڴ�ֵʱ������������û�����
	Mesh3D *ptr_mesh_;
	std::vector<HE_vert* > *ptr_vertlist_;	//Mesh�ﶥ���
	std::vector<point> new_positions_;		//Mesh��������������

public:
	CMiniSurf(void);
	CMiniSurf(Mesh3D *,float);
	~CMiniSurf(void);

private:
	void Init(void);						//��ʼ������Ҫ���̿���
	float MakeNewPositions(void);			//����һ�θ������������
	void WriteNewPositions(void);			//��new_positions_�������д��Mesh
};

