// libtorch_sample.cpp : ���̃t�@�C���ɂ� 'main' �֐����܂܂�Ă��܂��B�v���O�������s�̊J�n�ƏI���������ōs���܂��B
//

#include "main.h"
#include <iostream>
#include <torch/torch.h>

using namespace std;
using namespace torch;

int main()
{
    Tensor tensor_eye = torch::eye(3);
    Tensor tensor_rand = torch::rand({ 2, 3 });
    cout << "Hello World!\n" << endl;
    cout << tensor_eye << endl;
    cout << tensor_rand << endl;
}