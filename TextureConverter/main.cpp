#include <cstdio>
#include <cstdlib>
#include <iostream>

//�����ɓ����Ă���argc,argv���R�}���h���C�������ƌĂ�
int main(int argc,char*argv[]) {

	for (int i = 0; i < argc; i++) {
		//������argv��i�Ԃ�\��
		std::cout << argv[i] << std::endl;
	}

	//���^�[������O��pause������Ɨǂ���I
	//���O�̊m�F�����₷������
	system("pause");
	return 0;
}