// libtorch_sample.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
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