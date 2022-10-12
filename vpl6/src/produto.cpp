#include "produto.hpp"

int Produto::getQtd() const{
    return _quantidade;
}

float Produto::getValor() const{
    return _valor_unitario;
}

std::string Produto::descricao() const{
    return "Sou um produto";
}

float Produto::calcPreco(){
    return 0;
}

Produto::~Produto(){}